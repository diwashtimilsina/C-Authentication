#!/usr/bin/bash
echo "🐅️🐅️🐅️🐅️🐅️🐅️🐅️🐅️🐅️🐅️🐅️🐅️🐅️🐅️🐅️🐅️"
echo "🐅️SHELL CREATED               🐅️"
echo "🐅️🐅️🐅️🐅️🐅️🐅️🐅️🐅️🐅️🐅️🐅️🐅️🐅️🐅️🐅️🐅️"
echo "ENTER FILE NAME"
read FILE_NAME

if [ -f $FILE_NAME ]; then
    echo 'The file exists.'
    echo "$RANDOM" > $FILE_NAME
else
    echo 'The file does not exist.'
fi
