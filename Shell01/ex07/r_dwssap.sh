#!/bin/sh
cat /etc/passwd |grep -v '#' | sed -n 'n;p' | cut -d ':' -f 1 | rev | sort -r | awk '{if ( NR >= '$FT_LINE1' && NR <= '$FT_LINE2' )print }' | paste -s -d ','  - | sed 's/,/, /g' | sed 's/$/./g' | tr -d "\n"
