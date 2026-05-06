def func(x, y):
    print('Run', x, y)
    return x*y, x/y
           
r1, r2 = func(5,6) 
print(r1,r2)