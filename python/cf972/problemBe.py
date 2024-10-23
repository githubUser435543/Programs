#!/bin/python3
import math

for c in range(int(input())):
	cells, teachers, numQuries = map(int, input().split())
	teacherLocations = list(map(int, input().split()))
	quries = list(map(int, input().split()))
	position = quries[0]

	teacher1 = teacherLocations[0]
	teacher2 = teacherLocations[1]

	distance1 = position - teacher1
	distance2 = position - teacher2

	closerDistance = distance1 if abs(distance1) < abs(distance2) else distance2

	if distance1 == 0 or distance2 == 0:
		print(0)
		continue

	if distance1 > 0 and distance2 > 0:
		print(cells - position + closerDistance)
		continue

	if distance1 < 0 and distance2 < 0:
		print(position - 1 + abs(closerDistance))
		continue

	midpoint = (teacher1 + teacher2)/2
	print(midpoint, position, closerDistance)
	res = math.floor(abs(position - midpoint)) + abs(closerDistance)
	print(res)


