from decimal import localcontext, ROUND_HALF_DOWN, ROUND_HALF_UP, Decimal

def round_half_up(n, decimals): 
    with localcontext() as c:
        c.rounding = (ROUND_HALF_UP if n > 0 else ROUND_HALF_DOWN)
        if isinstance(n, float): n = Decimal(str(n))
        return format((round(n, decimals)), f".{decimals}f")
# c = 2pi*r = pi*d
for i in range(int(input())):
    pi = 3.14
    #d = 40075/Decimal(3.1415926535)
    d = 40075/3.1415
    addedD = 2 * float(input())
    res = round_half_up(pi * (d + addedD), 1)
    print(res)
