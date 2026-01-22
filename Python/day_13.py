#Functions

import time
choice = int(input("your choice"))
 
def function(choice):
 for num in range (1, choice):
  if num % 3 == 0 and num % 5 == 0:
    print("fizzbuzz")
  elif num % 3 == 0:
    print("fizz")
  elif num % 5 == 0:
    print("buzz")
  else:
    print(num)
    
print("about to run")
time.sleep(8)
function(choice)
