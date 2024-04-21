def isPrime(a):
    primes = []
    for i in a:
        t = True
        for j in range(2, round(i**0.5) + 1):
            if i % j == 0:
                t = False
                break
        if t and set(['1', '2', '3']) & set(list(str(i))):
            primes.append(i)
    return primes


#x = list(map(int, input().split()))
#z = list(map(int, input().split()))
x = [1, 2, 3, 4, 5, 6, 7, 8, 9]
z = [10, 11, 12, 13, 14, 15, 16, 17]

y = sorted(isPrime(x) + isPrime(z))
print(y)

print(y[-1] * y[-2])
print(y[0]* y[1] * y[2])