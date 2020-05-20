n, m = map(int, input().split())
y, x, d = map(int, input().split())
room = [list(map(int, input().split())) for _ in range(n)]
# d- 0(N)1(E)2(S)3(W)
dy = [-1, 0, 1, 0]
dx = [0, 1, 0, -1]
room[y][x] = 2


def solve(y, x, d, result):
    while True:
        c = False
        for i in range(4):
            nd = (d + 3) % 4
            ny, nx = y + dy[nd], x + dx[nd]
            d = nd
            if not room[ny][nx]:
                room[ny][nx] = 2
                result += 1
                y, x = ny, nx
                c = True
                break

        if not c:
            if room[y - dy[d]][x - dx[d]] == 1:
                return result
            else:
                y, x = y - dy[d], x - dx[d]


print(solve(y, x, d, 1))
