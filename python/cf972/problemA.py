#!/bin/python3

for c in range(int(input())):
	a = ""
	e = ""
	i = ""
	o = ""
	u = ""

	length = int(input())

	j = 1

	while length > 0:
		if j == 1:
			a += "a"
		elif j == 2:
			e += "e"
		elif j == 3:
			i += "i"
		elif j == 4:
			o += "o"
		else:
			u += "u"

		length -= 1
		if j != 5:
			j += 1
		else:
			j = 1

	print(a+e+i+o+u)