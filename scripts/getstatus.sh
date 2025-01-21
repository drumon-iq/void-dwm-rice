#! /bin/bash

get_battery () {
    curr_bat=$(cat /sys/class/power_supply/CMB1/capacity)
    charging=$(cat /sys/class/power_supply/CMB1/status)
    icon=""

    if [ ! "$charging" = "Discharging" ]; then
	icon=$(echo )
    elif [ $curr_bat -gt 90 ]; then
	icon=$(echo )
    elif [ $curr_bat -gt 60 ]; then
	icon=$(echo )
    elif [ $curr_bat -gt 30 ]; then
	icon=$(echo )
    elif [ $curr_bat -gt 15 ]; then
	icon=$(echo )
    else
	icon=$(echo )
    fi

    echo $icon $curr_bat%
}

get_date () {
    time=$(date "+%-I:%M %p")
    day=$(date "+%a, %d of %b")
    icon_clock=""
    icon_day=""
    echo $icon_clock $time $icon_day $day
}

get_volume () {
    icon_def_vol=""
    raw_volume=$(wpctl get-volume @DEFAULT_SINK@)
    value_only=$(echo $raw_volume | sed 's/Volume: //')
    perc=$(echo $value_only | awk '{print $0 * 100}')

    echo $icon_def_vol $perc%
}

xsetroot -name "$(get_date) $(get_battery) $(get_volume)"
