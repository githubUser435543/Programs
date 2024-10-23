#!/bin/python3

def bsmax(lo, hi, f):
    lo -= 1

    while lo < hi:
        mid = lo + (hi - lo) // 2
        print(mid)
        if f(mid):
            lo = mid
        else:
           hi = mid - 1

    return lo

def rett4(x):
    return x >= 8

for c in range(int(input())):
    print(bsmax(0, 69420, rett4))

