#memory exceed

import sys
from collections import deque
input = sys.stdin.readline
queue = deque()

A, B = map(int, input().split())
visited = [0] * (B+1)

def bfs(start):
    queue = deque([start])
    while queue:
        x = queue.popleft()
        if x == B:
            return visited[x]
            break
        for i in range(2):
            if i == 0:
                nx = x * 2
            elif i == 1:
                nx = x * 10 + 1
            if nx <= B:
                if visited[nx] == 0:
                    visited[nx] = visited[x] + 1
                    queue.append(nx)

ans = bfs(A)

if ans:
  print(ans+1)
else:
  print(-1)
