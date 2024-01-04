#!/usr/bin/bash
echo "enter program name"
read PROG_NAME
output=$(g++ $PROG_NAME)
if [[ $output=0 ]]; then
    echo " There was an error, display the error in $output"
    echo -e "Error:\n$output"
else
    echo" Compilation successfull"
    ./a.out
fi

