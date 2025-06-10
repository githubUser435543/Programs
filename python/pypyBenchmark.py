from time import time

def f():
    l = 0
    for x in range(10):
        for y in range(1000):
            for z in range(10000):
                if x == x and y == y and z == z and y ^ y == False and x ^ x == False and z ^ z == False:
                    l += 1
        print(x)
    return l

start = time()
f()
print(f"finished after {round(time() - start, 2)} seconds")
