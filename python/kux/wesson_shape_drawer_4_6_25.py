import random
import pygame
import sys


# Initialize PyGame
pygame.init()

# Screen dimensions
WIDTH, HEIGHT = 800, 600
screen = pygame.display.set_mode((WIDTH, HEIGHT))
pygame.display.set_caption("Interactive Drawing Board")

# Colors
WHITE = (255, 255, 255)
BLACK = (0, 0, 0)
RED = (255, 0, 0)
GREEN = (0, 255, 0)
BLUE = (0, 0, 255)
# Variables to store drawing state
drawing = False  # Track if the mouse is being held down
start_pos = []  # Start position for drawing shapes
selected_shape = None  # Track the shape type
triangle_points = []
# Fill screen with white initially
screen.fill(WHITE)
screen_clears = 0
counter_font = pygame.font.SysFont("Arial", 30)
counter = counter_font.render(str(screen_clears), False, BLACK)
screen.blit(counter, ((screen.get_width()/2) - counter.get_width()/2, 0))

def count():
    global screen_clears
    screen_clears += 1
    counter = counter_font.render(str(screen_clears), False, GREEN)
    screen.blit(counter, ((screen.get_width()/2) - counter.get_width()/2, 0))
# Main game loop
running = True
while running:
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            pygame.quit()
            sys.exit()

        # Start drawing when the mouse button is pressed
        if event.type == pygame.MOUSEBUTTONDOWN:
            drawing = True
            start_pos = event.pos

        # Stop drawing when the mouse button is released
        elif event.type == pygame.MOUSEBUTTONUP and drawing:
            drawing = False
            end_pos = event.pos

            # Draw the selected shape
            if selected_shape == "circle":
                radius = int(((end_pos[0] - start_pos[0]) ** 2 +
                              (end_pos[1] - start_pos[1]) ** 2) ** 0.5)
                pygame.draw.circle(screen, (255, 255, 0), start_pos, radius/2) # change 2 radius -> radius/2

            elif selected_shape == "rectangle":
                rect = pygame.Rect(min(start_pos[0], end_pos[0]), 
                                   min(start_pos[1], end_pos[1]),
                                   abs(start_pos[0] - end_pos[0]),
                                   abs(start_pos[1] - end_pos[1]))
                pygame.draw.rect(screen, (0, 255, 255), rect, 2)

            elif selected_shape == "line":
                pygame.draw.line(screen, random.choice([RED, GREEN, BLUE]), start_pos, end_pos, 3) # change 3 GREEN -> random.choice([RED, GREEN, BLUE])

            elif selected_shape == "triangle":
                if len(triangle_points) == 2:
                    triangle_points.append(end_pos)
                    pygame.draw.polygon(screen, (255, 0, 255), triangle_points, 3)
                    triangle_points = []
                else:
                    triangle_points.append(end_pos)

        # Detect key presses for selecting shapes
        if event.type == pygame.KEYDOWN:
            if event.key == pygame.K_c:  # Select circle
                selected_shape = "circle"
            elif event.key == pygame.K_r:  # Select rectangle
                selected_shape = "rectangle"
            elif event.key == pygame.K_l:  # Select line
                selected_shape = "line"
            elif event.key == pygame.K_SPACE:  # Clear the screen
                screen.fill(BLACK) # change 1 WHITE -> BLACK 
                count()
            elif event.key == pygame.K_t:
                selected_shape = "triangle"


    # Update the display
    pygame.display.flip()

    # Control the frame rate
    pygame.time.Clock().tick(99999999999)
