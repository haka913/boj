from collections import deque
import sys

dx = (-1, 1, 0, 0, 0, 0)
dy = (0, 0, -1, 1, 0, 0)
dz = (0, 0, 0, 0, -1, 1)

m, n, h = map(int, input().split())
a = [[list(map(int, input().split())) for _ in range(n)] for _ in range(h)]
q = deque()

for i in range(h):
    for j in range(n):
        for k in range(m):
            if a[i][j][k] == 1:
                q.append((i, j, k))


def bfs():
    while q:
        x, y, z = q.popleft()
        for i in range(6):
            nx, ny, nz = x + dx[i], y + dy[i], z + dz[i]
            if nx < 0 or nx >= h or ny < 0 or ny >= n or nz < 0 or nz >= m:
                continue
            if a[nx][ny][nz]:
                continue
            a[nx][ny][nz] = a[x][y][z] + 1
            q.append((nx, ny, nz))

bfs()
result = 0
check = True
for i in range(h):
    for j in range(n):
        for k in range(m):
            if a[i][j][k] == 0:
                # print(-1)
                check = False
                break
            result = max(result, a[i][j][k])

print(result-1 if check else -1)
