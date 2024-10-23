#!/bin/python3

filterArrayInput = lambda unfilteredInput: map(int, unfilteredInput.split())

#TODO:  can you make a function to assign global variables?
numJunctions, numPipes = filterArrayInput(input())

startingStability = (lambda junctions: [0 for junction in range(junctions)])(numJunctions)

pipeMatrix = (lambda pipeInput: [pipeInput for pipe in pipes])(filterArrayInput(input())

updateStabilityIncrease = (lambda inStability, pipeInfo: inStability[pipeMatrix[0]-1])

updateStabilityDecrease = (lambda inStability, pipeInfo: inStability[pipeMatrix[1]+1])

map(updateStabilityIncrease, startingStability, pipeMatrix[pipe])

