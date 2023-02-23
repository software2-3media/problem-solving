import sys
input = sys.stdin.readline

n = int(input())
arr = [*map(int, input().split())]
even = 0

for i in arr:
  if i % 2 == 0:
    even += 1
    
if even > n-even:
  print((n-even)*2+1)
  exit()

n -= even*2
ans = (even*2) + ((n//3)*2)

if n % 3 == 0:
  print(ans)
elif n % 3 == 1:
  print(ans-1)
elif n % 3 == 2:
  print(ans+1)
