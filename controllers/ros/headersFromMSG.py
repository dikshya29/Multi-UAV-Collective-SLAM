#! /usr/bin/env python

import os
import sys
import getopt
import string

from headersGenerator import HeadersGenerator

def main(argv):
    headersGenerator = HeadersGenerator()
    try:
        opts, args = getopt.getopt(argv, "h", ["help"])
    except getopt.GetoptError:
        print 'usage: headersFromMSG.py <servicefile.msg> [templatesFolder]'
        sys.exit(2)
    for opt, arg in opts:
        if opt == '-h':
            print 'usage: headersFromMSG.py <servicefile.msg> [templatesFolder]'
            sys.exit(2)
        elif opt in ("-h","--help"):
            print 'usage: headersFromMSG.py <servicefile.msg> [templatesFolder]'
            sys.exit(2)
    MSGFile = open(args[0],'r')
    filename = args[0].split('/')[-1]
    filename = filename.split('.')[0]
    templateFolder = 'include'
    if len(args) > 1:
      templateFolder = args[1]
    messageType = []
    messageName = []
    for line in MSGFile:
        message = line.split()
        if len(message) == 2:
            messageType.append(message[0])
            messageName.append(message[1])
    MSGFile.close()
    messageName.reverse()
    messageType.reverse()

    if not os.path.exists('include/webots_ros'):
        try:
            os.makedirs('include/webots_ros')
        except OSError:
            pass

    headersGenerator.replace_template_tags(templateFolder + '/templateMessage.h', filename + 'tempFile.txt', filename, args[0])
    headersGenerator.replace_message_tags(filename + 'tempFile.txt', 'include/webots_ros/' + filename + '.h', messageName, messageType)
    
    try:
        os.remove(filename + 'tempFile.txt')
    except OSError:
       print 'failed to remove tempFile for ' + filename


if __name__ == "__main__":
    main(sys.argv[1:])
