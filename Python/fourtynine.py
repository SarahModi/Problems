x = [2,3,4,5,2,43,123,245,456,356,78]

def func(i):
    i = i * 3 
    return i % 2 == 0
mp = filter(func, x)
print (list(mp))