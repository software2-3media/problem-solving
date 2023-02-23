#wrong

import sys
input = sys.stdin.readline

t = int(input())
for i in range(t):
  flag = False
  n = int(input())
  arr = [0]*n
  for j in range(n):
    arr[j] = input().rstrip()
  arr.sort(key=lambda x: len(x), reverse = True)
  for j in range(n):
    tmp = arr.pop()
    for k in arr:
      if tmp in k:
        print("NO")
        flag = True
        break 
  if flag == False:
    print("YES")
