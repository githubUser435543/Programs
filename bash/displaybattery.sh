#!/bin/bash
#  $(upower -e | grep 'BAT0') finds the battery
#  upower -i                  gets the information of the battery
#  grep -E "percentage:"      gets line with percentage
#  grep -Eo "[0-9]{1,3}%"     filters line for percentage
#  notify-send                displays notification
bat0=`upower -i $(upower -e | grep 'BAT0') | grep -E "percentage:" | grep -Eo "[0-9]{1,3}%"`
bat1=`upower -i $(upower -e | grep 'BAT1') | grep -E "percentage:" | grep -Eo "[0-9]{1,3}%"`
notify-send "BAT0: ${bat0} BAT1: ${bat1}"

