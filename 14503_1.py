n, m = map(int, input().split())
r, c, d = map(int, input().split())
a = [list(map(int, input().split())) for _ in range(n)]
# 0:north 1:east 2:south 3:west
dy = [-1, 0, 1, 0]
dx = [0, 1, 0, -1]
a[r][c] = 2

def solve(y, x, d, result):
    while True:
        c = False
        for i in range(4):
            nd = (d + 3) % 4
            ny, nx = y + dy[nd], x + dx[nd]
            d = nd
            if not a[ny][nx]:
                a[ny][nx] = 2
                result += 1
                y, x = ny, nx
                c = True
                break

        if not c:
            if a[y - dy[d]][x - dx[d]] == 1:
                return result
            else:
                y, x = y - dy[d], x - dx[d]


print(solve(r, c, d, 1))

for i in a:
    print(*i)