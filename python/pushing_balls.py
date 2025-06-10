#!/bin/pypy3
for c in range(int(input())):
    l, w = map(int, input().split())
    grid = [input().strip() for _ in range(l)]
    valid = True
    for i in range(1, l):
        for j in range(1, w):
            if (grid[i-1][j] == '0' and grid[i][j-1] == '0' and grid[i][j] == '1'):
                #print(f"{i=} {j=}")
                #print(f"{grid=}")
                valid = False
                break
        if (not valid): break

    print("YES") if valid else print("NO")

    
