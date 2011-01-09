bin_PROGRAMS = if-brg if-create
bin_SCRIPTS= if-bridge.sh

install-exec-hook:
	for f in $(bin_PROGRAMS); do chmod o-rw      $(bindir)/$$f; done
	for f in $(bin_PROGRAMS); do sudo chown root $(bindir)/$$f; done
	for f in $(bin_PROGRAMS); do sudo chmod u+s  $(bindir)/$$f; done
	for l in if-bridge0 if-bridge2 if-bridge3; do [ -L $(bindir)/$$l ] && \
		rm -f $(bindir)/$$l; \
		ln -s $(bindir)/$(bin_SCRIPTS) $(bindir)/$$l; done
