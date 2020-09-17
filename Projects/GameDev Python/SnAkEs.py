import pygame
import random
import os

pygame.mixer.init()

pygame.init()


#Colors
white =(255, 255, 255)
red = (255, 0, 0)
black = (0, 0, 0)
green = (0, 255, 0)
blue = (0, 130, 155)
light_red = (250,100,100)


#Creating window
screen_width = 900
screen_height = 600
game_window = pygame.display.set_mode((screen_width, screen_height))


#Background Image
bgimg = pygame.image.load("gameoverImg.jpg")
bgimg = pygame.transform.scale(bgimg, (screen_width, screen_height)).convert_alpha()


#Game Title
pygame.display.set_caption("HunGarry The Snake")
pygame.display.update()


clock = pygame.time.Clock()

font = pygame.font.SysFont(None, 55)

def text_screen(text, color, x, y):
    screen_text = font.render(text, True, color)
    game_window.blit(screen_text, [x,y])


def plot_snake(gameWindow, color, snake_list, snake_size):
    # print(snake_list)
    for x,y in snake_list:
        pygame.draw.rect(gameWindow, color, [x, y, snake_size, snake_size])


def welcome():
    pygame.mixer.music.load('MMM.mp3')
    pygame.mixer.music.play()
    exit_game =False
    while not exit_game:
        game_window.fill(blue)
        text_screen("HunGarry The Snake", black, 250, 250)
        text_screen("Press 'Spacebar' to START", black, 200, 300)

        for event in pygame.event.get():
            if event.type == pygame.QUIT:
                exit_game = True

            if event.type == pygame.KEYDOWN:
                if event.key == pygame.K_SPACE:
                    pygame.mixer.music.load('background_music.mp3')
                    pygame.mixer.music.play()
                    gameloop()


        pygame.display.update()
        clock.tick(60)

#Game Loop
def gameloop():

    # Game Specific Variables
    exit_game = False
    game_over = False
    snake_x = 45
    snake_y = 120
    velocity_x = 0
    velocity_y = 0
    init_velocity = 5
    snake_list = []
    snake_length = 1

    if not os.path.exists("highscore.txt"):
        with open("highscore.txt", "w") as f:
            f.write("0")

    with open("highScore.txt", "r") as f:
        highscore = f.read()

    food_x = random.randint(20, screen_width - 20)
    food_y = random.randint(20, screen_height - 20)

    score = 0

    snake_size = 30
    fps = 60


    while not exit_game:
        if game_over:
            with open("highScore.txt", "w") as f:
                f.write(str(highscore))


            game_window.fill(light_red)
            game_window.blit(bgimg, (0, 0))
            # text_screen("GAME OVER!", black, 330, 250)
            text_screen("Press Enter To Restart", white, 250, 450)

            for event in pygame.event.get():
                if event.type == pygame.QUIT:
                    exit_game = True

                if event.type == pygame.KEYDOWN:
                    if event.key == pygame.K_RETURN:
                        welcome()

        else:
            for event in pygame.event.get():
                if event.type == pygame.QUIT:
                    exit_game = True

                if event.type == pygame.KEYDOWN:
                    if event.key == pygame.K_w:
                        velocity_y = -init_velocity
                        velocity_x = 0

                    if event.key == pygame.K_a:
                        velocity_x = -init_velocity
                        velocity_y = 0

                    if event.key == pygame.K_s:
                        velocity_y = init_velocity
                        velocity_x = 0

                    if event.key == pygame.K_d:
                        velocity_x = init_velocity
                        velocity_y = 0


            snake_x = snake_x + velocity_x
            snake_y = snake_y + velocity_y

            if abs(snake_x - food_x)<snake_size and abs(snake_y - food_y)<snake_size:
                score += 10
                food_x = random.randint(20, screen_width - 20)
                food_y = random.randint(20, screen_height - 20)
                snake_length +=5
                if score>int(highscore):
                    highscore = score

            game_window.fill(black)
            text_screen("Score: " + str(score) + "   HighScore: " + str(highscore), green, 10, 10)
            pygame.draw.rect(game_window, white, [food_x, food_y, snake_size, snake_size])

            head = []
            head.append(snake_x)
            head.append(snake_y)
            snake_list.append(head)

            if len(snake_list)>snake_length:
                del snake_list[0]

            if head in snake_list[:-1]:
                game_over = True
                pygame.mixer.music.load('gameover.mp3')
                pygame.mixer.music.play()


            if snake_x > screen_width or snake_x < 0 or snake_y > screen_height or snake_y < 0:
                game_over = True
                pygame.mixer.music.load('gameover.mp3')
                pygame.mixer.music.play()

            # pygame.draw.rect(game_window, red, [snake_x, snake_y, snake_size, snake_size])
            plot_snake(game_window, red, snake_list, snake_size)

        pygame.display.update()
        clock.tick(fps)


    pygame.quit()
    quit()

welcome()
gameloop()