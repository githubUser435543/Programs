#!/bin/python3
for case in range(int(input())):
	for person in range(int(input())):
		name, fingers = input().split()
		fingers = int(fingers)
		if not (fingers == 1 or fingers == 2):
			print(name)