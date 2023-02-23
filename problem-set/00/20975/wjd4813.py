import sys
input = sys.stdin.readline

n = int(input())
cow = sorted([*map(int, input().split())], reverse = True)
stall = sorted([*map(int, input().split())], reverse = True)

ans = 1
cnt2 = 0
for i in cow:
  cnt1 = 0
  for j in stall:
    if i <= j:
      cnt1 += 1
  cnt1 -= cnt2
  cnt2 += 1
  ans *= cnt1
print(ans)
