#!/bin/bash

root=$(cd $(dirname $0) && pwd)
script=$(ls $root/scripts/$1.sh 2>/dev/null)

args=()

for i in $@; do
    args+="$i "
done
args=$(echo $args | sed "s/^\S* //")

if [ ! -z $script ]; then
    if [ -f $script ]; then
    	echo -e "\033[1mExecuting\033[0m $script $args"
    	echo Press ENTER to proceed
    	read stop > /dev/null
    	sh $script $args
    fi
else 
    options=$(ls $root/scripts | sed "s/.sh//")
    echo Usage run.sh SCRIPT
    echo -e "Avaible scripts:\033[4m\n$options\033[0m"
fi
