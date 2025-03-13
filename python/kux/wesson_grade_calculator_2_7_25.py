print("Jacob's Grade Calculator\nCtrl-C to exit\n\n")

while(True):
    try:
        grade: float = float(input("Enter your test grade here: ").strip("%"))
    except KeyboardInterrupt:
        print("\n")
        exit(0)
    except ValueError:
        print("please enter a valid grade")
        continue
    
    if grade > 89.5: print("Congratulations! You passed the test.\nYour grade is: A")
    elif grade > 79.5: print("Congratulations! You passed the test.\nYour grade is: B")
    elif grade > 69.5: print("Congratulations! You passed the test.\nYour grade is: C")
    elif grade > 59.5: print("Congratulations! You passed the test.\nYour grade is: D")
    else: print("Congratulations! You failed the test.\nYour grade is: F")
    continue
