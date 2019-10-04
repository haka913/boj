import copy
import sys
from collections import deque
sys.setrecursionlimit(100000)
n = int(input())
board1 = []
# 상하좌우
dy = [-1, 1, 0, 0]
dx = [0, 0, -1, 1]

for _ in range(n):
    board1.append(list(input()))

# 적록색맹
board2 = copy.deepcopy(board1)
board2 = [[w.replace('G', 'R') for w in board2[i]] for i in range(n)]


def bfs(y, x, color, board):
    q = deque()
    q.append([y, x])
    board[y][x] = 'P'
    while q:
        y, x = q.popleft()
        for i in range(4):
            ny, nx = y + dy[i], x + dx[i]
            if 0 <= ny and ny < n and 0 <= nx and nx < n and board[ny][nx] == color:
                board[ny][nx] = 'P'
                q.append([ny, nx])


cnt_noncolor = 0
for y in range(n):
    for x in range(n):
        if board1[y][x] != 'P':
            bfs(y, x, board1[y][x],board1)
            cnt_noncolor += 1

cnt_colorweek = 0

for y in range(n):
    for x in range(n):
        if board2[y][x] != 'P':
            bfs(y, x, board2[y][x],board2)
            cnt_colorweek += 1

print(cnt_noncolor, cnt_colorweek)


# for i in board1:
#     print(*i)
#
# print()
# for i in board2:
#     print(*i)
