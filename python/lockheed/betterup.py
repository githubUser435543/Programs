#!/bin/python3
from decimal import localcontext, ROUND_HALF_DOWN, ROUND_HALF_UP, Decimal
def round_half_up(n, decimals): 
    with localcontext() as c:
        c.rounding = (ROUND_HALF_UP if n > 0 else ROUND_HALF_DOWN)
        if isinstance(n, float): n = Decimal(str(n))
        return float(round(n, decimals))


for i in range(int(input())):
    
    nm, scorestr = input().split(":")
    scores = scorestr.split(",")
    singles = 0
    doubles = 0
    triples = 0
    homerns = 0
    batats = 0
    for score in scores:
        if '1' in score: singles += 1
        elif '2' in score: doubles += 1
        if '3' in score: triples += 1
        if 'HR' in score: homerns += 1
        if 'BB' in score: continue
        batats += 1
    

    if batats != 0:
        sgl = (singles + doubles * 2 + triples * 3 + homerns * 4) / batats
        sgl = round_half_up(sgl, 3)
        print(f'{nm.strip()}={format(sgl, ".3f")}'.strip())
    else:
        print(f'{nm}={0.000}')
