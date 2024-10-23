#!/bin/python3
import timeit

def whileLoop():
    array = []
    i = 0
    while i < 1_000_000:
        array.append(i * i)
        i += 1
    return array

def forLoop():
    array = []
    for i in range(1_000_000):
        array.append(i * i)
    return array

def listEnum():
    return [i * i for i in range(1_000_000)]

def mapIteration():
    square = lambda i: i * i
    list(map(square, range(1_000_000)))



print("While Loop: ", timeit.timeit(whileLoop, number=1))
print("For Loop: ", timeit.timeit(forLoop, number=1))
print("List Enumeration: ", timeit.timeit(listEnum, number=1))
print("Map function: ", timeit.timeit(mapIteration, number=1))
