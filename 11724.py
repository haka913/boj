import sys
from collections import deque
n, m = map(int, sys.stdin.readline().split())
visited = [False]*(n+1)
net = [[] for _ in range(n+1)]

for _ in range(m):
    u, v = map(int, sys.stdin.readline().split())
    net[u].append(v)
    net[v].append(u)

def bfs(idx):
    q = deque()
    q.append(idx)
    visited[idx] = True
    while q:
        now = q.popleft()
        for i in range(len(net[now])):
            nxt = net[now][i]

            if visited[nxt] is False:
                q.append(nxt)
                visited[nxt]=True

cnt =0
for i in range(1, n+1):
    if visited[i] is False:
        bfs(i)
        cnt+=1

print(cnt)



# import sys
# sys.setrecursionlimit(10000)
# n, m = map(int, sys.stdin.readline().split())
# visited = [False]*(n+1)
# net = [[] for _ in range(n+1)]
# for _ in range(m):
#     u, v = map(int, sys.stdin.readline().split())
#     net[u].append(v)
#     net[v].append(u)
#
# def dfs(idx):
#     visited[idx] = True
#     for i in net[idx]:
#         if visited[i] is False:
#             dfs(i)
#
# cnt =0
# for i in range(1, n+1):
#     if visited[i] is False:
#         dfs(i)
#         cnt+=1
#
# print(cnt)


