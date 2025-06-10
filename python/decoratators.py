from time import sleep

def loop(f):
    while True:
        f("hi")
        sleep(1)

@loop
def printStuff(message):
    print(message)


printStuff("hi")
