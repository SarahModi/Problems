x = [x + 5 for x in range (5)]
y = [x % 5 for x in range (5)]
z = [0 for x in range (5)]
a = [[0 for x in range(100)]for x in range(5)]
b = [i for i in range (100) if i % 5 == 0]
c = tuple(i for i in range (100) if i % 5 == 0)



print(x)
print(y)
print(z)
print(a)
print(b)
print(c)