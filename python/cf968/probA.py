#!/bin/python3

for c in range(int(input())):
	leng = input()
	string = input()
	if string[0] == string[-1]:
		print("nO")
	else:
		print("yEs")