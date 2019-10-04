from collections import deque

dy, dx = (0, 0, 1, -1), (1, -1, 0, 0)
L, D = (3, 2, 0, 1), (2, 3, 1, 0)


def solve():
    x, y, z, d, result = 0, 0, 0, 0, 0
    board[0][0] = 2
    q = deque()
    q.append((0, 0))
    while True:
        x, y = x + dx[d], y + dy[d]
        result += 1
        if x < 0 or x >= n or y < 0 or y >= n or board[x][y] == 2:
            print(result)
            return
        if not board[x][y]:
            nx, ny = q.popleft()
            board[nx][ny] = 0
        board[x][y] = 2
        q.append((x, y))
        t, c = move_po[z]
        if result == int(t):
            if c == 'L':
                d = L[d]
            else:
                d = D[d]
            z = (z + 1) % L


n = int(input())
# board = [[0] * n for _ in range(n)]
board = [[0] * n]*n
print(board)
k = int(input())
for _ in range(k):
    x, y = map(int, input().split())
    board[x - 1][y - 1] = 1

L = int(input())
move_po = [list(input().split()) for _ in range(L)]

solve()

# todo 3190
