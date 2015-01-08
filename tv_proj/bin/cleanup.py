#!/usr/bin/env python
import re
import sys

#target = open("data.txt", 'r')

for line in open("data.txt",'r'):
#	print line
#for s in content:
	if (re.search(":", line)):
		temp = line
		temp = temp.replace(" ", "_")
		temp = temp.replace(".", "_")
		temp = temp.replace(":", "")
		temp = temp.replace('\n', "")
		print "\n" + "struct " + temp + "{"

	elif (re.search("on", line) or re.search("up", line) or re.search("down", line) or re.search("timer", line) or re.search("speed", line) or re.search("mute", line) ):
		print "int *" + line + "{"

	elif (re.search("usec", line)):
		this = line
	elif (re.search("OFF", line)):
		this = line
	else:
		print "}"

#word = "helo"
#	print "match"
#else:
#	print "no match"

