#!/bin/python3.11

inClass, wroteDown = map(int, input().split())
names = set()
for i in range(wroteDown):
    names.add(input().strip())
if len(names) == inClass:
    print("YES")
else:
    print("NO")
    
