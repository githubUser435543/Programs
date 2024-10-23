#!/bin/python3
# 100 = x + y
# tens = 100 - x
# 900 = 5x + 10y
# 900 = 5x + 10(100 - x)
# money = 5x + 10(bills - x)
# money/5 = x + 2(bills - x)
# money/5 = x + 2bills - 2x)
# money/5 -2bills= -x
# -money/5 + 2bills= x
cases = int(input())

for case in range(cases):
    money, bills = map(int, input().split())
    fives = 2*bills - int(money/5)
    tens = bills - fives
    print(fives, tens)

