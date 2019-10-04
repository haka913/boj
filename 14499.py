n, m, y, x, k = map(int, input().split())
arr = [list(map(int, input().split())) for _ in range(n)]
order = list(map(int, input().split()))
# 1: 동 // 2: 서 // 3: 북 // 4: 남
dy = [0,0,-1,1]
dx = [1,-1,0,0]
direct = [
    (2, 1, 5, 0, 4, 3),
    (3, 1, 0, 5, 4, 2),
    (4, 0, 2, 3, 5, 1),
    (1, 5, 2, 3, 0, 4)
]
dice =[0]*6
tmp = [0]*6
for i in range(k):
    d = order[i]-1
    y,x = y+dy[d], x+dx[d]
    if y<0 or y>=n or x<0 or x>=m:
        y,x = y-dy[d], x-dx[d]
        continue
    for j in range(6):
        tmp[j] = dice[j]
    for j in range(6):
        dice[j] = tmp[direct[d][j]]
    if arr[y][x]:
        dice[5] = arr[y][x]
        arr[y][x] = 0
    else:
        arr[y][x] = dice[5]

    print(dice[0])