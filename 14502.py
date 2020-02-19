n, m = map(int, input().split())
lab = [list(map(int, input().split())) for _ in range(n)]
safe = -3
virus = []
check = [[False] * m for _ in range(n)]
virus_cnt = 100


def dfs(y, x):
    res = 1
    check[y][x] = True
    for dy, dx in (-1, 0), (1, 0), (0, -1), (0, 1):
        ny, nx = y + dy, x + dx
        if ny < 0 or ny >= n or nx < 0 or nx >= m:
            continue
        if not (check[ny][nx] or lab[ny][nx]):
            res += dfs(ny, nx)
    return res


def solve(wall, y, x):
    global virus_cnt, check
    if wall == 3:
        cnt = 0
        check = [[False] * m for _ in range(n)]
        for i, j in virus:
            cnt += dfs(i, j)
        virus_cnt = min(virus_cnt, cnt)
        return
    for i in range(y, n):
        k = x if i == y else 0
        for j in range(k, m):
            if lab[i][j] == 0:
                lab[i][j] = 1
                solve(wall + 1, i, j + 1)
                lab[i][j] = 0


for y in range(n):
    for x in range(m):
        if lab[y][x] != 1:
            safe += 1
        if lab[y][x] == 2:
            virus.append((y, x))

solve(0,0,0)
print(safe-virus_cnt)





# n, m = map(int, input().split())
# a = [list(map(int, input().split())) for _ in range(n)]
# c = [[False]*m for _ in range(n)]
# v, safe, virus = [], -3, 100
#
# def dfs(x, y):
#     res = 1
#     c[x][y] = True
#     for dx, dy in (-1,0), (1,0), (0,-1), (0,1):
#         nx, ny = x+dx, y+dy
#         if nx < 0 or nx >= n or ny < 0 or ny >= m:
#             continue
#         if not (c[nx][ny] or a[nx][ny]):
#             res += dfs(nx, ny)
#     return res
#
# def solve(wall, x, y):
#     global virus, c
#     if wall == 3:
#         cnt = 0
#         c = [[False]*m for _ in range(n)]
#         for i, j in v:
#             cnt += dfs(i, j)
#         virus = min(virus, cnt)
#         return
#     for i in range(x, n):
#         k = y if i == x else 0
#         for j in range(k, m):
#             if a[i][j] == 0:
#                 a[i][j] = 1
#                 solve(wall+1, i, j+1)
#                 a[i][j] = 0
#
# for i in range(n):
#     for j in range(m):
#         if a[i][j] != 1:
#             safe += 1
#         if a[i][j] == 2:
#             v.append((i, j))
# solve(0, 0, 0)
# print(safe-virus)



