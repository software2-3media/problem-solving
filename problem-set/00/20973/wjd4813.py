import sys
input = sys.stdin.readline

cow = input().rstrip()
human = input().rstrip()
cnt = 0

while human != "":
  for j in cow:
    if human[0] == j:
      human = human[1:]
    if human == "":
      break
  cnt += 1
print(cnt)
