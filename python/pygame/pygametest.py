#!/usr/bin/pypy3.10

import pygame
from pygame import Surface, Rect
#from input import getKeysPressed
from pygame.key import ScancodeWrapper
#from pygame.time import Clock

def getKeysPressed():
    keysPressed: ScancodeWrapper = pygame.key.get_pressed()
    indexes: set[int] = set()
    for i in range(len(keysPressed)):
        if keysPressed[i]: indexes.add(i)
    return indexes

def main():
    # Initialize Pygame
    pygame.init()

    # Set screen dimensions
    screen_width: int = 800
    screen_height: int = 600
    screen: Surface = pygame.display.set_mode((screen_width, screen_height))
    
    # Set title
    pygame.display.set_caption("GAME")
    
    # Set character defaults
    
    color: tuple[int, int, int] = (255, 0, 0)
    xPos: float = 100.0
    yPos: float = 100.0
    width: int = 50
    height: int = 50
    
    # Game loop
    running: bool = True
    while running:
        # Handle events
        for event in pygame.event.get():
         if event.type == pygame.QUIT:
             running = False
    
        keys: set[int] = getKeysPressed()

        movementKeys: list[bool] = [pygame.K_w in keys, pygame.K_a in keys, pygame.K_s in keys, pygame.K_d in keys]

        if movementKeys 

        print(pygame.K_w)

        screen.fill((0, 0, 0))  # Black background
        pygame.draw.rect(screen, color, (xPos, yPos, width, height))
     
        pygame.display.flip()
    
    pygame.quit()

if __name__ == "__main__":
    main()
