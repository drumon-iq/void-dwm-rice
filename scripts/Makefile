include config.mk

SCRIPTS = getstatus.sh statusbar.sh

install:
	mkdir -p ${DESTDIR}${PREFIX}/scripts
	cp -f ${SCRIPTS} ${DESTDIR}${PREFIX}/scripts
	chmod 755 ${DESTDIR}${PREFIX}/scripts/*

uninstall:
	rm -f ${DESTDIR}${PREFIX}/scripts

.PHONY: install uninstall
