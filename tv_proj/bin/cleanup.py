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
            print "\n" + "struct " + temp.rstrip() + "{"

	elif (re.search("on", line) or re.search("up", line) or re.search("down", line) or re.search("timer", line) or re.search("speed", line) or re.search("mute", line) ):
	    print "void " + line.rstrip() + "{"

	elif (re.search("usec", line)):
	    words = line.split(",")
            words[0] = words[0].replace("usec", "")
            words[1] = words[1].replace("usec", "")
            words[1].rstrip()
            print "delayMicroseconds(" + words[0] + ")"
            print "pulseIR(" + words[1].rstrip() + ")"
            
	elif (re.search("OFF", line)):
	    this = line
	else:
	    print "}"

#word = "helo"
#	print "match"
#else:
#	print "no match"

