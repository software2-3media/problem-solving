import sys, math
input = sys.stdin.readline

n = int(input())

for i in range(n):
    x1, y1, r1, x2, y2, r2 = map(int, input().split())
    dist = math.sqrt(pow((x1-x2), 2) + pow((y1-y2), 2))
    arr = sorted([r1, r2, dist])
    max_r = arr.pop()

    if dist == 0 and r1 == r2:
        print(-1)
    elif dist == r1+r2 or max_r == sum(arr):
        print(1)
    else:
        if max_r > sum(arr):
            print(0)
        else:
            print(2)
