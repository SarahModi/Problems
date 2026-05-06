def func(x):
    def func2():
        print(x)


    return func2
print(func(3)())    