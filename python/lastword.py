#!/bin/python3

for case in range(int(input())):
	yappers = int(input())
	lastyap = "yipyap"	
	for yap in range(yappers):
		lastyap = input().strip()
	print(lastyap)
# sublime lint