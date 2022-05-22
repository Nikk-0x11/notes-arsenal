#!/bin/bash
maim -s --format png /dev/stdout | copyq write image/png -
notify-send -u "low" -t 500 "Copied!" "Screenshot copied to clipboard!"
