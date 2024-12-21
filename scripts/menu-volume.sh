#!/bin/bash

#Abomination
#Abandon all hope ye who desires to understand the regex
wpctl status | grep vol | sed \
    -e 's/.*vol: \(.*\)]/Volume \1%/'\
    -e 's/.*MUTED.*/MUTED/' \
    -e 's/\.//' \
    -e 's/[ 0]\+0\([^%]\)/ \1/'
