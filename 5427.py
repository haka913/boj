from collections import deque



def bfs(w, h):
    q = deque()
    # 위(0,-1) 아래(0,1) 좌(-1,0) 우(1,0)
    dx = (0, 0, -1, 1)
    dy = (-1, 1, 0, 0)
    visited = [[float('inf')] * 1001 for i in range(1001)]
    for y in range(h):
        for x in range(w):
            if building[y][x] == '*': #불이면 큐에 삽입
                q.append((y, x, 1))
                visited[y][x] = 0

    while q:
        y, x, cnt = q.popleft()
        for i in range(4):
            nx = x + dx[i]
            ny = y + dy[i]
            if ny < 0 or ny >= h or nx < 0 or nx >= w:
                continue
            if building[ny][nx] == '.' and visited[ny][nx] > cnt:
                visited[ny][nx] =cnt # 불이 도달하는 시간을 저장
                q.append((ny, nx, cnt + 1))

    for y in range(h):
        for x in range(w):
            if building[y][x] == '@':
                q.append((y, x, 1))

    while q:
        y, x, cnt = q.popleft()
        for i in range(4):
            nx = x + dx[i]
            ny = y + dy[i]
            if ny < 0 or ny >= h or nx < 0 or nx >= w: #탈출하면 cnt출력
                print(cnt)
                return
            if building[ny][nx] == '.' and visited[ny][nx] > cnt: # 빈공간이고 불이 붙지 않았다면
                visited[ny][nx] = -1
                q.append((ny, nx, cnt + 1))
    print("IMPOSSIBLE")


case = int(input())
for _ in range(case):
    w, h = map(int, input().split())
    building = []
    for i in range(h):
        building.append(list(input()))
    bfs(w,h)

# print(building)
