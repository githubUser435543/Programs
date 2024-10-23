#!/bin/python3
from heapq import *
from copy import deepcopy

def dijkstras(g, start):
	visited = [-1] * len(g)

	pq = []
	heappush(pq, (0, start))


	while len(pq) > 0:
		distance, node = heappop(pq)
		if visited[node] != -1: continue

		visited[node] = distance

		#if node == visited: return distance
		for weight, nxt in g[node]:
			if visited[nxt] != -1: continue # are both checks needed?
			heappush(pq, (weight + distance, nxt))


	return visited

nodes, edges = map(int, input().split())

adjarr = [[] for n in range(nodes)]

# normal graph
for e in range(edges):
	u, v, w = map(int, input().split())
	# indexing starts at one
	u -= 1
	v -= 1
	adjarr[u].append((w, v))
	adjarr[v].append((w, u))

starAdjArr = deepcopy(adjarr)

#print(starAdjArr)

for i in range(len(adjarr)):
	starNode = len(adjarr) - 1 - i + len(adjarr)
	adjarr[i].append((0, starNode))

adjarr = adjarr + starAdjArr

distances = dijkstras(adjarr, 0)

res = []
for i in range(1, nodes):
	orignal = distances[i]
	starUsed = distances[i + nodes]
	if orignal == -1:
		res.append(starUsed)
	elif starUsed == -1:
		res.append(orignal)
	else:
		lower = orignal if orignal < starUsed else starUsed
		res.append(lower)
print(" ".join(map(str, res)))