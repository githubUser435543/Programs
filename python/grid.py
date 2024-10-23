#!/bin/python3
#print(0 % 2)
for c in range(int(input())):
	string = ""
	width = int(input())
	for i in range(width):
		string += input().strip()
	w = 0
	b = 0
	for e in string:
		if e == "W":
			w += 1
		else:
			b += 1
	#empty = input()	
	string2 = ""
	for i in range(width):
		string2 += input().strip()
	w2 = 0
	b2 = 0
	for e in string2:
		if e == "W":
			w2 += 1
		else:
			b2 += 1
	#print("w", w)
	#print("w2", w2)
	#print("b", b)
	#print("b2", b2)
	if (w2 % 2 != w % 2 or b2 % 2 != b % 2):
		print("grid problems :(")
	else:
		print("grid problems <3")