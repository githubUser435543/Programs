# total
# numItems


# highest possible median
# sum == target
# 2 2 2 2 2 = 10
# 1 1 1 1 6 = 10

# O(1) solution:
# subtract length from total (array of all 1s)
# evenly distrabute between median onwards

# (s-n)//(n-n//2) + 1

o1Solution = lambda s, n: (s-n)//(n-n//2) + 1



print(o1Solution(1, 2))
print(o1Solution(2, 5))
print(o1Solution(3, 5))
print(o1Solution(2, 1))

def bsMax(lo, hi, f):
    assert hi >= lo
    if not f(lo): return "404"
    while lo < hi:
        mid = lo + (hi - lo) // 2

        if f(mid):
            lo = mid
        else:
            hi = mid - 1
    return hi

def isEqual(total, target):
    return total == target
