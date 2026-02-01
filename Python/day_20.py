#create a greeting
#create your wordlist
#randomly choose a word from the list you created
#ask user to guess a letter
#make the program take the input from the user and make it lowercase
#check if the letter is in the word



import random #importing an already written code by someone to randomly choice from a list
#create a greeting
name = input ("What is you name?: ")

def username(name):
 print(f"Welcome {name}. You're about to enter a game called HANGMAN. Are you ready {name}? IDC whether you are or not. Let's begin...")

username(name)
#create your wordlist
words = ["hacker", "bounty", "random", "fun", "game"]
#randomly choose a word from the list you created
secret_word = random.choice(words)
#ask user to guess a letter and make the program take the input from the user and make it lowercase
guess = input(f"Guess a letter silly {name}: ").lower() #to convert anything you write, to lowercase.
print(guess) # to show you that it actually works :)

#check if the letter is in the word
for letter in secret_word
 if letter == guess:
   print("good")

 else:
   print("wrong")


# This code only runs once, we'll tackle that in the upcoming codes
