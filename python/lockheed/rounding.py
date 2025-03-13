from decimal import localcontext, ROUND_HALF_DOWN, ROUND_HALF_UP, Decimal

def round_half_up(n, decimals): 
    with localcontext() as c:
        c.rounding = (ROUND_HALF_UP if n > 0 else ROUND_HALF_DOWN)
        if isinstance(n, float): n = Decimal(str(n))
        return float(round(n, decimals))

lasserts = [
        format(round_half_up(1.434, 2), ".2f"), 
        format(round_half_up(1.435, 2), ".2f"), 
        format(round_half_up(1.436, 2), ".2f"),
        format(round_half_up(-1.414, 2), ".2f"),
        format(round_half_up(-1.415, 2), ".2f"),
        format(round_half_up(-1.416, 2), ".2f"),
    ]
"""
test 2 failed. lasserts[i]='1.43' rasserts[i]='1.44'
test 5 failed. lasserts[i]='-1.42' rasserts[i]='-1.41'
"""
rasserts = ["1.43", "1.44", "1.44", "-1.41", "-1.41", "-1.42"]
for i in range(len(lasserts)):
    try:
        assert lasserts[i] == rasserts[i]
        print(f"test {i+1} passed")
    except AssertionError:
        print(f"test {i+1} failed. {lasserts[i]=} {rasserts[i]=}")
