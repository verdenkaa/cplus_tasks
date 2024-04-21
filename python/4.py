def f(x):
    return x[-1] + x[1:-1] + x[0]


a = list(input().split())

for i in range(len(a) - 1):
    print(f(a[i]))