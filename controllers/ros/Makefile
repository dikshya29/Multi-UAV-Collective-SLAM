# Webots Makefile system
#
# You may add some variable definitions hereafter to customize the build process
# See documentation in $(WEBOTS_HOME_PATH)/resources/Makefile.include
# Webots Makefile system
#
# You may add some variable definitions hereafter to customize the build process
# See documentation in $(WEBOTS_HOME_PATH)/resources/Makefile.include

SERVICE_FILES = $(wildcard include/srv/*.srv)
SERVICE_HEADERS = $(SERVICE_FILES:include/srv/%.srv=include/services/%.h)

MESSAGE_FILES = $(wildcard include/msg/*.msg)
MESSAGE_HEADERS = $(MESSAGE_FILES:include/msg/%.msg=include/messages/%.h)

GENERATED_HEADERS = $(MESSAGE_HEADERS:include/messages/%.h=include/webots_ros/%.h)
GENERATED_HEADERS += $(SERVICE_HEADERS:include/services/%.h=include/webots_ros/%.h)
all:
	@echo $(WEBOTS_HOME)
space :=
space +=
WEBOTS_HOME_PATH=$(subst $(space),\ ,$(strip $(subst \,/,$(WEBOTS_HOME))))
include $(WEBOTS_HOME_PATH)/resources/Makefile.os.include

ifeq ($(OSTYPE),windows)
 CFLAGS = -Wno-unused-local-typedefs
endif

ifeq ($(OSTYPE),linux)
 CFLAGS = -Wno-unused-local-typedefs -Wno-deprecated-declarations -std=c++11 -pthread
endif

ifeq ($(OSTYPE),darwin)
 USE_STD_CXX = true
endif

CXX_SOURCES = $(wildcard *.cpp)

ifeq ($(OSTYPE),windows)
 ros.exe: $(CXX_SOURCES:.cxx=.d)
else
 ros: $(CXX_SOURCES:.cxx=.d)
endif

$(CXX_SOURCES:.cxx=.d): $(GENERATED_HEADERS) include/templateHeader.h include/templateRequest.h include/templateResponse.h

ifndef CURDIR
 CURDIR = $(shell pwd)
endif

$(GENERATED_HEADERS): $(SERVICE_HEADERS) $(MESSAGE_HEADERS)

include/messages/%.h: $(CURDIR)/include/msg/%.msg include/templateHeader.h include/templateRequest.h include/templateResponse.h headersFromMSG.py headersGenerator.py
	python headersFromMSG.py $<
	mkdir -p $(CURDIR)/include/messages
	cp $(CURDIR)/include/webots_ros/$(basename $(notdir $<)).h $(CURDIR)/include/messages/$(basename $(notdir $<)).h

include/services/%.h: $(CURDIR)/include/srv/%.srv include/templateHeader.h include/templateRequest.h include/templateResponse.h headersFromSRV.py headersGenerator.py
	python headersFromSRV.py $<
	mkdir -p $(CURDIR)/include/services
	cp $(CURDIR)/include/webots_ros/$(basename $(notdir $<)).h $(CURDIR)/include/services/$(basename $(notdir $<)).h


INCLUDE = -I"$(CURDIR)/include"

# include ros libraries

LIBRARIES += -L"../../libraries/ros" -lroscpp -lrosconsole -lroscpp_serialization -lrostime
ifeq ($(OSTYPE),windows)
 LIBRARIES += -lws2_32
 ifeq ($(MAKECMDGOALS),debug)
  # The following option is fixing the following error
  # appearing only on Windows 64 bits in debug mode
  # (probably that the number of templates is causing this)
  # RosSupervisor.o: too many sections
  CFLAGS += -Wa,-mbig-obj
 endif
endif

ifeq ($(OSTYPE),linux)
 LIBRARIES += -Wl,-rpath,"../../libraries/ros" -lpthread
endif

# Hide Boost warnings
ifeq ($(OSTYPE),darwin)
CFLAGS += -Wno-unused-local-typedefs
endif

FILES_TO_REMOVE += include/webots_ros include/messages include/services

### Do not modify: this includes Webots global Makefile.include

space :=
space +=
WEBOTS_HOME_PATH=$(subst $(space),\ ,$(strip $(subst \,/,$(WEBOTS_HOME))))
include $(WEBOTS_HOME_PATH)/resources/Makefile.include
