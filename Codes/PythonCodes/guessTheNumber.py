n = 22
print("WELCOME TO GUESS THE NUMBER")
for guess_number in range(8):
    print("Enter your guess below")
    guess = int(input())
    if guess > n:
        print(f"Try a number lower than your guess\nGUESSES LEFT {8-guess_number}")
        continue
    elif guess < n:
        print(f"Try a number higher than your guess\nGUESSES LEFT {8-guess_number}")
        continue
    else:
        print(f"YOU WON\nYOU GUESSED THE RIGHT NUMBER IN {guess_number+1} GUESS(ES)")
        break