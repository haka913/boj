import sys
r, c, m = map(int, sys.stdin.readline().split())
a = [[[0, 0, 0] for _ in range(c)] for _ in range(r)]
dx, dy = [-1, 1, 0, 0], [0, 0, 1, -1]
result = 0
for _ in range(m):
    # s: speed, d: direct, z:size
    # d:1-up 2-down 3-right 4-left
    x, y, s, d, z = map(int, sys.stdin.readline().split())
    a[x - 1][y - 1] = [s, d - 1, z]

for t in range(c):
    b = [[[0, 0, 0] for _ in range(c)] for _ in range(r)]
    for i in range(r):
        _, _, z = a[i][t]
        if z:
            result += z
            a[i][t] = [0, 0, 0]
            break

    for i in range(r):
        for j in range(c):
            s, d, z = a[i][j]
            if z:
                # up, down
                if d < 2:
                    ns, nd, ni = s % (2 * (r - 1)), d, i
                    for _ in range(ns):
                        if ni == 0 and nd == 0:
                            nd = 1
                        if ni == r - 1 and nd == 1:
                            nd = 0
                        ni += dx[nd]
                    _, _, bz = b[ni][j]
                    if z > bz:
                        b[ni][j] = [s, nd, z]
                # right, left
                else:
                    ns, nd, nj = s % (2 * (c - 1)), d, j
                    for _ in range(ns):
                        if nj == 0 and nd == 3:
                            nd = 2
                        if nj == c - 1 and nd == 2:
                            nd = 3
                        nj += dy[nd]
                    _, _, bz = b[i][nj]
                    if z > bz:
                        b[i][nj] = [s, nd, z]
                a[i][j] = [0, 0, 0]
    a = b[:]

print(result)

# todo 17143
