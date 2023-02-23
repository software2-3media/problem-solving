import sys
from collections import deque
input = sys.stdin.readline
queue = deque()

n, m, k, x = map(int, input().split())
graph = [[] for _ in range(n+1)]
visited = [False] * (n+1)
dist = [0] * (n+1)

for _ in range(m):
    a, b = map(int, input().split())
    graph[a].append(b)

def bfs(start):
    ans = []
    queue = deque([start])
    visited[start] = True
    dist[start] = 0
    while queue:
        x = queue.popleft()
        for i in graph[x]:
            if visited[i] == False:
                visited[i] = True
                dist[i] = dist[x]+1
                queue.append(i)
                if dist[i] == k:
                    ans.append(i)
    if ans:
        for i in sorted(ans):
            print(i)
    else:
        print(-1)

bfs(x)
