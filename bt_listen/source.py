#!/usr/bin/env python
import serial
import re
ser = serial.Serial("/dev/ttyUSB0", 9600)
while True:
		word = ser.readline()
#    print ser.readline()
		print word 
		if (re.search("Jarvis", word)):
			print "match"
		else:
			print "no match"
		
