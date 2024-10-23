#!/bin/python3

for case in range(int(input())):
	bAuth, bVerif, problems = map(int, input().split())
	badAuthList = set()
	badVerifsList = set()
	for ba in range(bAuth): badAuthList.add(input().strip())
	for bv in range(bVerif): badVerifsList.add(input().strip())
	MustRe = 0	
	for p in range(problems):	
		auth, ver = input().split()
		if (auth == ver):
			MustRe += 1
			continue
		if (auth in badAuthList and ver in badVerifsList):
			MustRe += 1
			continue
	print(MustRe)

