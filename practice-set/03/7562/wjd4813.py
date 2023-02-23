import sys
from collections import deque
input = sys.stdin.readline
dx, dy = [-1, -2, -2, -1, 1, 2, 2, 1], [2, 1, -1, -2, -2, -1, 1, 2]

def bfs(ax, ay, bx, by):
    queue = deque()
    queue.append((ax, ay))
    dist[ax][ay] = 1
    while queue:
        x, y = queue.popleft()
        if x == bx and y == by:
            return(dist[bx][by])
        for i in range(8):
            nx = x + dx[i]
            ny = y + dy[i]
            if nx < 0 or nx >= n or ny < 0 or ny >= n:
                continue
            else:
                if dist[nx][ny] == 0:
                    queue.append((nx, ny))
                    dist[nx][ny] = dist[x][y] + 1

t = int(input())
for _ in range(t):
    n = int(input())
    ax, ay = map(int, input().split())
    bx, by = map(int, input().split())
    dist = [[0]*n for _ in range(n)]
    print(bfs(ax, ay, bx, by)-1)
