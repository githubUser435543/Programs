#!/bin/python3
import timeit
import sys
sys.set_int_max_str_digits(10**9)
def algo(inp):
	for case in range(int(input())): print(len(str(bin(int(inp)))-3))

print(timeit.timeit("algo(2**1)", "from __main__ import algo"))
print(timeit.timeit("algo(2**10)", "from __main__ import algo"))
print(timeit.timeit("algo(2**100)", "from __main__ import algo"))
#print(timeit.timeit("algo(2**10000)", "from __main__ import algo"))
#print(timeit.timeit("algo(2**100000)", "from __main__ import algo"))

# import sys so we can access the function below
import sys
# python strings can only be 4300 characters long
# this sets the string length limit to a billion which i think is half the size of a ...
# C integer but at the time of the contest i was rushed and thought it was the full length
# The reason i wanted it to be set to the C integer maximum is because thats all
# this function can take w/o throwing an error
# if the input number was more the C integer maximum i would have been actually fucked
sys.set_int_max_str_digits(10**9)

cases = int(input())
for case in range(cases):
		number = int(input()) # take input, turn it into an integer so we can convert it to binary
		binNumber = bin(number) # turn it into a binary, each power of 2 increases the length by 1
		binaryString = str(binNumber) # turn it into a string so we can take the length
		binaryLength = len(binaryString)-3 # The length is offset is -2 from the '0b' binary prefix and
		# -1 because we start at the power of 0
		print(binaryLength)

