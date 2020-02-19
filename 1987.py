r, c = map(int, input().split())
a = [list(input().strip()) for _ in range(r)]
already = []
result = 0
dx = [-1, 1, 0, 0]
dy = [0, 0, -1, 1]
check = [False] * 26


def dfs(x, y, ans):
    global result
    result = max(result, ans)
    for i in range(4):
        nx, ny = x + dx[i], y + dy[i]
        if nx < 0 or nx >= r or ny < 0 or ny >= c:
            continue
        alpha = ord(a[nx][ny]) - ord('A')
        if check[alpha] == False:
            check[alpha] = True
            dfs(nx, ny, ans + 1)
            check[alpha] = False


check[ord(a[0][0]) - ord('A')] = True
dfs(0, 0, 1)
print(result)
# print(already)
# for i in a:
#     print(*i)
