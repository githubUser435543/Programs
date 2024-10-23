#!/bin/python3
for case in range(int(input())):
    nameSet = set()
    names = int(input())
    for n in range(names):
        name = input().strip()
        nameSet.add(name)
    print(names - len(nameSet))


