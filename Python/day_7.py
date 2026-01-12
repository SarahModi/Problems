# Write a program that prompts the user to enter their score (out of 100) and
# displays their corresponding grade based on the following criteria:

# Scores 90 and above: Grade A
# Scores 80 to 89: Grade B
# Scores 70 to 79: Grade C
# Scores 60 to 69: Grade D
# Scores below 60: Grade F

score = input("enter your score: ")
score = int(score)

if score >= 90:
    age = int(input("What is your age?: "))
    if age < 11:
     print("you got an A+")
    else:
     print("your grade is A")
    
elif score >= 80:
    age = int(input("What is your age? "))
    if age < 11:
       print("you got a B+")
    else:
       print("your grade is B")

elif score >= 70:
    age = int(input("What is your age? "))
    if age < 11:
     print("Your grade is C+")
    else:
     print("Your grade is C")
    
else:
    print("study more next time")


