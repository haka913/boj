import sys
from collections import deque

sys.setrecursionlimit(100000)

# y,x
n, m = map(int, input().split())
board = []
check = [[False]*m for _ in range(n)]
# 상하좌우
dy = [-1, 1, 0, 0]
dx = [0, 0, -1, 1]


def bfs(y, x):
    q = deque()
    q.append([y, x, 0])
    check[y][x] = True
    dist = 0

    while q:
        y, x, d = q.popleft()
        for i in range(4):
            ny, nx = y + dy[i], x + dx[i]
            if 0 <= ny and ny < n and 0 <= nx and nx < m and board[ny][nx] == 'L' and check[ny][nx] is False:
                q.append([ny, nx, d + 1])
                check[ny][nx] = True
                dist = max(dist, d + 1)

    return dist


for _ in range(n):
    board.append(list(input()))

result = 0
for y in range(n):
    for x in range(m):
        if board[y][x] == 'L':
            check = [[False] * m for _ in range(n)]
            result = max(result, bfs(y, x))

# for i in board:
#     print(*i)

print(result)
