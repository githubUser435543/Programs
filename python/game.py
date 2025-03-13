import pygame

pygame.init()
screen = pygame.display.set_mode([500, 500])
font = pygame.font.Font(None, 50)
running = True

while running:
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            running = False

    screen.fill((255, 255, 255))
    text = font.render("fuck yourslef!", False, (0, 0, 0))
    text2 = font.render("fuck yourslef!", True, (0, 0, 0))
    screen.blit(text, (100, 100))
    screen.blit(text2, (100, 200))
    pygame.display.flip()
