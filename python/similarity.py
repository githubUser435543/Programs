#!/bin/python3
import math
#print((int(math.sqrt(3)//1))+1)
def isPrime(n):
    prime = True
    if n == 1:
        return False
    #number = (int(math.sqrt(n)//1))+1
    for i in list(range(2, (int(math.sqrt(n)//1))+1)):
        if (n % i == 0):
            prime = False
            break
        
    return prime

cases = int(input())
for case in range(cases):
    numStr, person = input().split()
    num = int(numStr)
    win = True
    if (isPrime(num) and (num != 3)):
        win = False
    
    #print("isPrime:", isPrime(num))
    if ((person == "V" and win == True) or (person == "P" and win == False)):
        print("Email")
    else:
        print("Teams")



#if v wins email
#if  p wins teams
# 
