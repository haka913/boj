from collections import deque
import sys

input = sys.stdin.readline

dx = (-1, 1, 0, 0, 0, 0)
dy = (0, 0, -1, 1, 0, 0)
dz = (0, 0, 0, 0, -1, 1)
L, R, C, sx, sy, sz, ex, ey, ez = [0] * 9


def bfs(a, dist):
    q = deque()
    q.append((sx, sy, sz))
    while q:
        x, y, z = q.popleft()
        if x == ex and y == ey and z == ez:
            print("Escaped in %d minute(s)." % dist[x][y][z])
            return
        for i in range(6):
            nx, ny, nz = x + dx[i], y + dy[i], z + dz[i]
            if nx < 0 or nx >= L or ny < 0 or ny >= R or nz < 0 or nz >= C:
                continue
            if dist[nx][ny][nz] or a[nx][ny][nz] == '#':
                continue
            dist[nx][ny][nz] = dist[x][y][z] + 1
            q.append((nx, ny, nz))
    print("Trapped!")


while True:
    L, R, C = map(int, input().split())
    if L == 0 and R==0 and C==0:
        break

    a = [[[] * C for _ in range(R)] for _ in range(L)]
    dist = [[[0] * C for _ in range(R)] for _ in range(L)]
    for i in range(L):
        a[i] = [list(input().strip()) for _ in range(R)]
        input()
    for i in range(L):
        for j in range(R):
            for k in range(C):
                if a[i][j][k] == 'S':
                    sx, sy, sz = i, j, k
                elif a[i][j][k] == 'E':
                    ex, ey, ez = i, j, k
    bfs(a, dist)




# import sys
# input=sys.stdin.readline
# dx=[1,-1,0,0,0,0]
# dy=[0,0,1,-1,0,0]
# dz=[0,0,0,0,1,-1]
# while True:
# 	L,R,C=map(int,input().split())
# 	if L+R+C==0:break
# 	g=[[[-1]*C for _ in range(R)] for _ in range(L)]
# 	for z in range(L):
# 		for y in range(R):
# 			for x,k in enumerate(input().rstrip()):
# 				if k=='S':S=(x,y,z)
# 				elif k=='E':E=(x,y,z)
# 				if k!='#':g[z][y][x]=0
# 		input()
# 	g[S[2]][S[1]][S[0]]=1
# 	Q=[S]
# 	for x,y,z in Q:
# 		for i in range(6):
# 			X,Y,Z=x+dx[i],y+dy[i],z+dz[i]
# 			if 0<=X<C and 0<=Y<R and 0<=Z<L and g[Z][Y][X]==0:
# 				g[Z][Y][X]=g[z][y][x]+1
# 				Q.append((X,Y,Z))
# 	t=g[E[2]][E[1]][E[0]]
# 	if t:print('Escaped in %d minute(s).'%(t-1))
# 	else:print('Trapped!')