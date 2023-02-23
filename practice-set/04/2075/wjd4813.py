#wrong

import heapq

n = int(input())
queue = []

for _ in range(n-1):
    arr = [*map(int, input().split())]
    max_num = max(arr)
    heapq.heappush(queue, max_num)


arr = [*map(int, input().split())]
for i in sorted(arr):
    heapq.heappush(queue, i)

queue.sort()
print(queue[-n])
