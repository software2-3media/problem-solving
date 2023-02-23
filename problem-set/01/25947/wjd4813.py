#time exceed

import sys
input = sys.stdin.readline

n, b, a = map(int, input().split())
arr = sorted([*map(int, input().split())], reverse=True)
for i in range(n):
    if b >= sum(arr[i:i+a])//2 + sum(arr[i+a:]):
        print(n-i)
        break
