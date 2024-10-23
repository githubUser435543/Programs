#!/bin/python3

def bsmax(lo, hi, f):
    if not f(lo): return "oof"
    assert hi >= lo
    while lo < hi:
        mid = lo + (hi - lo) // 2

        if f(mid):
            lo = mid
        else:
            hi = mid - 1

    return hi

def test1(x): return x >= 5

print(bsmax(0, 10, test1))
print(bsmax(-69, 420, test1))
print(bsmax(-69, -60, test1))
