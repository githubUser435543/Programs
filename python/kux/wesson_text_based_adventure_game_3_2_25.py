#!/bin/python3
# Timetravel batman batman batman

print("You, Batman, have gone back in time to meet Batman")
print("currently you are in gothem city, watching batman from the shadows, he is eating wings")
userInput: str = input("steal his wings? y or n: ").lower().strip()
if userInput == "y":
    print("BAD ENGING 1:")
    print("you jump from the shadows, trying to steal his wings, but you are stopped. By batman.")
    print("Turns out the batman you stole wings from, also traveled back in time to get revenge, he knocks you out")
    
elif userInput == "n":
    print("Stealing the wings would be too risky, there could be other time traveling Batmans watching")
    print("You decide not to steal the wings, but instead to continue watching")
    print("As you watch, you notice something, across the street from the Batman you are watching")
    print("There is another batman also watching from the shadows")
    userInput = input("confront him? y or n: ").lower().strip()
    if userInput == "y":
        print("GOOD ENDING")
        print("You walk up to the batman and ask him who he is. He says \"I am Batman\"")
        print("He explains how he has come back in time to protect the chicken wings from a rogue time traveling batman")
        print("Good thing you didn't steal those wings")
        print("You become batman friends and fight evil time traveling Batmans")
    elif userInput == "n":
        print("You stay in the shadows watching the batmans when another batman appears") #
        print("He says he is evil batman and he is going to take out all the batmans")
        userInput = input("attack evil batman? y or n: ").lower().strip()
        if userInput == "y":
            print("BAD ENDING 2")
            print("Evil Batman kills you")
            exit(420)
        elif userInput == "n":
            print("BAD ENDING 3")
            print("The other Batmans fight Evil Batman, Evil Batman wins")
            print("Evil Batman then finds you and beats you up")
            pass
        else:
            print("People who can't follow instructions don't deserve to play games.")
            exit(420)
    else:
        print("People who can't follow instructions don't deserve to play games.")
        exit(420)
 

else:
    print("People who can't follow instructions don't deserve to play games.")
    exit(420)
