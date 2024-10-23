#!/bin/python3
import sys
print = sys.stdout.write
input = sys.stdin.readline

for case in range(int(input())):
	cypher = {}
	finalcyph = {}
	res = ""
	plaintext = list(input().strip())
	alphabet = list("abcdefghijklmnopqrstuvwxyz")
	cyAfter = list(input().strip())
	cyAfterCopy = cyAfter # final cyher
	k = int(input())
	# make cypher
	for i in range(len(alphabet)): cypher[alphabet[i]] = cyAfter[i]

	# cypher the cypher k-1 times (its already done once)
	for i in range(k-1):
		for x in range(len(alphabet)):
			curr = cyAfterCopy[x]
			cyAfterCopy[x] = cypher[curr]

	# make final cypher
	for i in range(len(alphabet)): finalcyph[alphabet[i]] = cyAfterCopy[i]
	
	# cypher plaintext
	for i in range(len(plaintext)): res += finalcyph[plaintext[i]]
	print(res)