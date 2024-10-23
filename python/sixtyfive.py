#!/bin/python3

for case in range(int(input())):
	citToLoc = {}
	cities, quries = map(int, input().split())
	for c in range(cities):
		city, location = input().split()
		location = int(location)
		citToLoc[city] = location

	for i in range(quries):
		a, b = input().split()
		print(abs(citToLoc[a]-citToLoc[b]))
