#!/bin/bash

sudo su -c 'echo "usb1" > /sys/bus/usb/drivers/usb/unbind'
sudo su -c 'echo "usb1" > /sys/bus/usb/drivers/usb/bind'
#sleep 1.5s
#sudo ifconfig usb0 192.168.0.1 netmask 255.255.255.0
