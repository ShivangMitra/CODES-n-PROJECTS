import random

player_point = 0
comp_point = 0

def game_result(choice, comp_choice):
    global player_point
    global comp_point
    if comp_choice == "s":
        if choice == "w":
            print("YOU LOST")
            comp_point += 1
            print(f"Your Score:{player_point}  Computer's Score:{comp_point}")
        elif choice == "g":
            print("YOU WON")
            player_point += 1
            print(f"Your Score:{player_point}  Computer's Score:{comp_point}")
        else:
            print("IT WAS A TIE")
            print(f"Your Score:{player_point}  Computer's Score:{comp_point}")
    elif comp_choice == "w":
        if choice == "w":
            print("IT WAS A TIE")
            print(f"Your Score:{player_point}  Computer's Score:{comp_point}")
        elif choice == "g":
            print("YOU LOST")
            comp_point += 1
            print(f"Your Score:{player_point}  Computer's Score:{comp_point}")
        else:
            print("YOU WON")
            player_point += 1
            print(f"Your Score:{player_point}  Computer's Score:{comp_point}")
    else:
        if choice == "w":
            print("YOU WON")
            player_point += 1
            print(f"Your Score:{player_point}  Computer's Score:{comp_point}")
        elif choice == "g":
            print("IT WAS A TIE")
            print(f"Your Score:{player_point}  Computer's Score:{comp_point}")
        else:
            print("YOU LOST")
            comp_point += 1
            print(f"Your Score:{player_point}  Computer's Score:{comp_point}")

if __name__ == '__main__':
    print("WELCOME TO SNAKE WATER GUN")
    i = 0
    while i < 9:
        print("Enter your choice snake(s) water(w) gun(g)")
        choice = input()
        if choice is not "s" and choice is not "w" and choice is not "g":
            print("INVALID INPUT...ROUND CANCELED...YOU LOST A TURN")
            i+=1
            continue
        l = ["s", "w", "g"]
        comp_choice = random.choice(l)
        print(f"computer chose {comp_choice}")
        game_result(choice, comp_choice)
        i+=1
    if player_point>comp_point:
        print(f"CONGRATULATIONS YOU HAVE WON THE GAME\nFINAL SCORE\nYour: {player_point} Computer: {comp_point}")
    elif player_point == comp_point:
        print(f"THE GAME WAS A TIE\nFINAL SCORE\nYour: {player_point} Computer: {comp_point}")
    else:
        print(f"HARD LUCK...TRY AGAIN NEXT TIME\nFINAL SCORE\nYour: {player_point} Computer: {comp_point}")