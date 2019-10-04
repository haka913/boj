import sys
from collections import deque
sys.setrecursionlimit(100000)
m, n, k = map(int, input().split())
board = [[0] * n for _ in range(m)]

cnt = 1
# 상하좌우
dy = [-1, 1, 0, 0]
dx = [0, 0, -1, 1]
area_list = []

def bfs(y, x):
    q = deque()
    q.append([y, x])
    board[y][x] = cnt
    area = 1
    while q:
        y, x = q.popleft()
        for i in range(4):
            ny, nx = y + dy[i], x + dx[i]
            if ny >= 0 and ny < m and nx >= 0 and nx < n and board[ny][nx] == 0:
                area += 1
                board[ny][nx] = cnt
                q.append([ny, nx])
    area_list.append(area)

for _ in range(k):
    x1, y1, x2, y2 = map(int, input().split())
    for y in range(y1, y2):
        for x in range(x1, x2):
            board[y][x] = cnt

for y in range(m):
    for x in range(n):
        if board[y][x] == 0:
            cnt += 1
            bfs(y, x)


area_list.sort()
print(len(area_list))
print(*area_list)
# print board
# for i in board:
#     print(*i)
