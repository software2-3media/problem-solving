n = int(input())

a, b = 0, 1
m = 1000000
n = n % (15*m)

for i in range(n):
    a, b = b%m, (a+b)%m
print(a)
