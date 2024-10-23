#!/bin/python3
for c in range(int(input())):
	orig = input().strip()
	substring = input().strip()
	res = list(orig)
	
	si = 0
	oi = 0	
	while oi < len(orig) and si < len(substring):
		if orig[oi] == substring[si]:
			si += 1
			oi += 1
			continue
		elif orig[oi]	== "?":
			res[oi] = substring[si]
			si += 1
			oi += 1
		else:
			oi += 1

	for i in range(len(res)): 
		if res[i] == "?": res[i] = "a"

	if si == len(substring):
		print("yEs")
		print("".join(res))
	else:
		print("nO")

