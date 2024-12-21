#!/bin/zsh

confirmChoice() {
    command=$1
    choice=$(echo "no\nyes" | dmenu -p "Are you sure?")

    if [ $choice = 'yes' ]; then
	echo "$command" | ${SHELL:-"/bin/sh"} &
    fi
}

option=$( echo "Sair\nSuspender\nDesligar\nHibernar\nReiniciar" | dmenu) 

case "$option" in
    Desligar)
	confirmChoice "loginctl poweroff"
	;;
    Suspender)
	confirmChoice "loginctl suspend"
	;;
    Sair)
	confirmChoice "pkill dwm"
	;;
    Hibernar)
	confirmChoice "loginctl hibernate"
	;;
    Reiniciar)
	confirmChoice "loginctl reboot"
	;;
    *)
	echo "alright" | dmenu -p "Invalid Input, won't do anything"
	;;
esac
