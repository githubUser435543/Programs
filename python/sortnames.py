#!/bin/python3

class Person:
    def __init__(self, name, age, money):
        self.name = name
        self.age = age
        self.money = money
    def __str__(self):
        return f"{self.name} {self.age} {self.money}"
    def __lt__(self, other):
        return other.money < self.money or (other.money == self.money and self.age < other.age)

ppl = int(input())
people = []
for i in range(ppl):
    nameIn, ageIn, moneyIn = input().split()
    ageIn = int(ageIn)
    moneyIn = int(moneyIn)
    personIn = Person(nameIn, ageIn, moneyIn)
    people.append(personIn)
# for pplObj in people:
#     print(str(pplObj))

people.sort()
#print("-------- sorted -----")
for pplObj in people:
    print(str(pplObj))


    

