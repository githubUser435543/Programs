#!/bin/python3

for c in range(int(input())):
	a, b = map(int, input().split())
	yes = False
	if a == 0 and b % 2 == 0:
		print("yes")
		continue

	if b == 0 and a % 2 == 0:
		print("yes")
		continue

	if a % 2 == 0 and a != 0:
		print("yes")
		continue

	print("no")
	