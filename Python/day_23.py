import random #importing an already written code by someone to randomly choice from a list
#create a greeting

print(f"Welcome! You're about to enter a game called HANGMAN. Are you ready? IDC whether you are or not. Let's begin...")

#create your wordlist
words = ["hacker", "bounty", "random", "fun", "game"]
#create an empty list
#for each letter in the secret_word add a "_" that will be printed to the console
#Example, if the word is hacker "_", "_", "_", "_", "_", "_"

secret_word = random.choice(words)
print ("you get 5 guesses")
display_word = []
for letter in secret_word:
  display_word += "_"
print (display_word)

# Create a variable as an int starting at 0 and when it gets to the number 5 it ends
# tell the user they get  chances only

num = 0
game_over = False

while not game_over:
  guess = input(f"Guess a letter silly: ").lower()  
  for position in range(len(secret_word)):
    letter = secret_word[position]
    if letter == guess:
       display_word[position] = letter
  if guess not in secret_word:
   num += 1
   guesses_left = 5 - num
   print (f"You have {guesses_left} guesses left")
   if num >= 5:
      print("You Lose")
      game_over = True
  print(display_word)
 
  if "_" not in display_word:
     print ("You Win")
     game_over = True
