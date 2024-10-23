#!/bin/python3

for case in range(int(input())):
	# you can multiply all x and y togther in an ordered set and do a sweep with c
	x, y, z, restriction = map(int, input().split())
	xScraps = list(map(int, input().split()))
	yScraps = list(map(int, input().split()))
	zScraps = list(map(int, input().split()))
	xScraps.sort()
	yScraps.sort()
	zScraps.sort()
	debug = xScraps[0] * yScraps[0] * zScraps[0]
	print("product:", debug, "restriction:", restriction)
	if (xScraps[0] * yScraps[0] * zScraps[0] > restriction):
		print("DISQUALIFIED!")
		continue

	xScraps.reverse()
	yScraps.reverse()
	zScraps.reverse()
	xi = 0
	yi = 0
	zi = 0
	atEndx = False
	atEndy = False
	atEndz = False

	size = "you printed this variable without setting it and thats a problem"
	while 1:
		print("xi:", xi, "yi:", zi, "zi:", zi)
		product = xScraps[xi] * yScraps[yi] * zScraps[zi]
		if (product <= restriction): # can product be == to restriction
			size = product
			break
		# why is atEnd being set True?
		print("xScraps:", xScraps, "xi", xi)
		if xi < len(xScraps)-1: xDecrease = xScraps[xi] - xScraps[xi+1]
		else: atEndx = True
		if yi < len(yScraps)-1: yDecrease = yScraps[yi] - yScraps[yi+1]
		else: atEndy = True
		if zi < len(zScraps)-1: zDecrease = zScraps[zi] - zScraps[zi+1]
		else: atEndz = True
		
		if not atEndx: xVolDecrease = xDecrease * yScraps[yi] * zScraps[zi]
		if not atEndy: yVolDecrease = yDecrease * xScraps[xi] * zScraps[zi]
		if not atEndz: zVolDecrease = zDecrease * xScraps[xi] * yScraps[yi]
		print("endx:", atEndx)
		print("endy:", atEndy)
		print("endz:", atEndz)
		if not atEndx: 
			print("index out of range?", atEndx, xi)
			if xVolDecrease <= yVolDecrease and xVolDecrease <= zVolDecrease: xi += 1
			print("index out of range?", atEndx, xi)
		if not atEndy:
			if yVolDecrease <= xVolDecrease and yVolDecrease <= zVolDecrease: yi += 1
		if not atEndz: 
			if zVolDecrease <= xVolDecrease and zVolDecrease <= yVolDecrease: zi += 1
		# 4 5 6

	print(size)			



