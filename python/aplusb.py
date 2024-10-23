#!/bin/python3
for c in range(int(input())):
	total = 0
	for digit in input().strip(): total += int(digit)
	print(total)