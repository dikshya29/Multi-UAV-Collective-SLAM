PHYSICS=$(subst Makefile,,$(shell ls))

.PHONY: release debug profile

release debug profile clean:
	@+for X in $(PHYSICS); do \
		echo "# make" $@ $$X; \
		make -s -C $$X $@ ; \
	done

