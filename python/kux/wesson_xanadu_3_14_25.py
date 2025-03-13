def xanadu(duration, research_volume):
    if research_volume == 1: return duration
    orbs = [not i & 1 for i in range(duration)]; glowingOrbs = 0; clearOrbs = 0; collections = 0;
    for i in orbs:
        if i:
            glowingOrbs += 1
            if glowingOrbs == research_volume: glowingOrbs = clearOrbs; clearOrbs = 0; collections += 1;
        else: clearOrbs += 1
    return collections

assert xanadu(10, 3) == 2
assert xanadu(5, 2) == 2
assert xanadu(6, 2) == 2
assert xanadu(8, 4) == 1
assert xanadu(5, 1) == 5
print("assertions passed")

