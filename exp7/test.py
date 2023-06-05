def func4(x):
    if x==1:
        return 1
    else:
        return x*func4(x-1)

print(func4(10))