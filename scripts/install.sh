#!/bin/bash
root=$(cd $(dirname $0)/.. && pwd)
dwm=$root/dwm
st=$root/st
dmenu=$root/dmenu

check_installed () {
    list_apps=$@
    missing=0
    
    for i in $list_apps; do
	if ! command -v $i > /dev/null 2>&1; then
	    echo $i wasn\'t found in your PATH
	    missing=$((missing+1))
	fi
    done

    if ! [ "$missing" -eq 0 ]; then
	echo Missing $missing files
	exit
    fi
}

make_install () {
    for i in $@; do
	cd $i
	if ! make install 2> $root/.make-error.log; then
	    echo "\033[1m Failed make \033[0m$(ls $i/Makefile),\n\033[1merror log below:\033[0m\n ---\n\033[3m$(cat $root/.make-error.log)"
	    exit
	fi
    done
}

check_installed gcc make startx

if [ -z $@ ]; then
    make_install $dwm $st $dmenu
else
    make_install $@
fi

check_installed st dwm dmenu dmenu_path dmenu_run
