#!/usr/bin/bash
echo "🐅️🐅️🐅️🐅️🐅️🐅️🐅️🐅️🐅️🐅️🐅️🐅️🐅️🐅️🐅️🐅️🐅️🐅️🐅️🐅️"
echo "🐅️ SETUP YOUR SMTP SO SEND MAIL       🐅️"
echo "🐅️🐅️🐅️🐅️🐅️🐅️🐅️🐅️🐅️🐅️🐅️🐅️🐅️🐅️🐅️🐅️🐅️🐅️🐅️🐅️"
echo "ENTER YOUR EMAIL"
read email
sendmail $email subject: ONE TIME PASSWORD 
echo " ENTER ctrl + D to send mail"


