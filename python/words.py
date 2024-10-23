#!/bin/python3
wordslist = []
words = int(input())
longest = ""
stringArr = []
rotatedArr = []

for word in range(words): stringArr.append(input().strip())

for word in range(words):
	if len(stringArr[word]) > len(longest): longest = stringArr[word];

for i in range(words): rotatedArr.append([])

for w in range(words):
	for i in range(word):
		rotatedArr[i][w] = stringArr[w][i]
res = ""
for cNum in rotatedArr:
	res += chr(sum(map(ord, cNum))//len(cNum))
	

print(res)

