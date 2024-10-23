#!/bin/python3

for case in range(int(input())):
	sHour, sMin, delay = map(int, input().split())
	delMin = sMin + delay
	delHour = sHour
	while 1:
		if delMin >= 60:
			delMin -= 60
			delHour += 1
			if delHour > 12:
				delHour -= 12
		else:
			break
	print(delHour, delMin)