import random #importing an already written code by someone to randomly choice from a list
#create a greeting

print(f"Welcome! You're about to enter a game called HANGMAN. Are you ready? IDC whether you are or not. Let's begin...")

#create your wordlist
words = ["hacker", "bounty", "random", "fun", "game"]
#create an empty list
#for each letter in the secret_word add a "_" that will be printed to the console
#Example, if the word is hacker "_", "_", "_", "_", "_", "_"

secret_word = random.choice(words)
print (secret_word)
display_word = []
for letter in secret_word:
  display_word += "_"
print (display_word)

# Use while loop so that your game keeps going
# until the word has been guessed
game_over = False

while not game_over:
 guess = input(f"Guess a letter silly: ").lower() #to convert anything 
 for position in range(len(secret_word)):
    letter = secret_word[position]
    if letter == guess:
      display_word[position] = letter
 print(display_word)
 
 if "_" not in display_word:
     print ("You Win")
     game_over = True
