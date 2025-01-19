include config.mk

SCRIPTS = getstatus.sh statusbar.sh
LAUNCHER = dmenu_launcher

inst-launcher:
	cp -f pdmenu-launcher.py ${DESTDIR}${PREFIX}/bin/${LAUNCHER}
	chmod 755 ${DESTDIR}${PREFIX}/bin/${LAUNCHER}

install: inst-launcher
	mkdir -p ${DESTDIR}${PREFIX}/scripts
	cp -f ${SCRIPTS} ${DESTDIR}${PREFIX}/scripts
	chmod 755 ${DESTDIR}${PREFIX}/scripts/*

uninstall:
	rm -f ${DESTDIR}${PREFIX}/scripts

.PHONY: install uninstall
