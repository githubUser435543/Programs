#!/bin/python3
def functionName():
    x = 5
    global y: int = 10

try:
    print(x)
except Exception as e:
    print("print x failed 1")


try:
    print(y)
except Exception as e:
    print("print y failed 1")

functionName()


try:
    print(x)
except Exception as e:
    print("print x failed 2")


try:
    print(y)
except Exception as e:
    print("print y failed 2")




