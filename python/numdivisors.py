#!/bin/python3.11
import math
PRIMENUMBERS: [int] = [2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97]

def findPrimeFactors(n):
    primeFactors: [int] = []

    for prime in PRIMENUMBERS:
        if n  % prime == 0:
            primeFactors.append(prime)

    print("primeFactors: ", primeFactors) #NOTE: Remove before uploading
    return primeFactors

# def findPrimeFactors(n):
#     primeFactors: [int] = []
#
#     for prime in PRIMENUMBERS:
#         tmpNum: int = n
#         while tmpNum % prime == 0:
#             tmpNum = tmpNum / prime
#             primeFactors.append(prime)
#
#     print("primeFactors: ", primeFactors) #NOTE: Remove before uploading
#     return primeFactors

def findDivisors(primeList, num):
    divisors = 0
    product = 1
    for i in range(len(primeList)):
        divisors += math.comb(len(primeList), i+1)
        product = product * primeList[i]
    if product == num:
        divisors -= 1

    print("divisors: ", divisors) #NOTE: Remove later
    return divisors

cases: int = int(input())
for case in range(cases):
    number: int = int(input())
    primeFactorsOfN: [int] = findPrimeFactors(number)
    divisorsOfN = findDivisors(primeFactorsOfN, number)
    print(divisorsOfN)

    
    
# cases: int = int(input())
# for case in range(cases):
#     number: int = int(input())
#     currentDivisor: int = 1
#     divisors: int = 0
#     while True:
#         if number % currentDivisor == 0:
#             result = number / currentDivisor
#             if result > currentDivisor:
#                 divisors += 2
#             elif result == currentDivisor:
#                 divisors += 1
#                 break
#             else:
#                 break
#         currentDivisor += 1
#     print(divisors)
#
#         

