import pygame
from pygame.key import ScancodeWrapper



def getKeysPressed():
    keysPressed: ScancodeWrapper = pygame.key.get_pressed()
    for i in range(len(keysPressed)):
        if keysPressed[i]: print(f"{i} got pressed")


