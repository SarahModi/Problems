def function():
 print ("Sarah")

for num in range (1, 100):
 if num % 3 == 0 and num % 5 == 0:
  print("fizzbuzz")
 elif num % 3 == 0:
  print("fizz")
 elif num % 5 == 0:
  print("buzz")
 else:
    print(num)

function()
#compiler reads the code line by line but doesn't excite print hello befor reading function() 
