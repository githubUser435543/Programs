#!/bin/python3
import sys
sys.setrecursionlimit(1000000)
def odom(odometer: [int], k: int): # k is the amount of list already solved
	if (k == len(odometer)):
		print(odometer)
		return
	else:
		for i in range(4):
			odometer[k]	= i
			odom(odometer, k+1)


odom([0, 0, 0], 0)
#def combinations


# def perm(arr: [int], k: int, used: [bool])
# n = 10


# check arup's notes