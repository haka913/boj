# '.' : 비어있는곳, '*': 물이찬지역, 'X': 돌, 'D':destiny, 'S':start
import sys
from collections import deque
sys.setrecursionlimit(10**6)
r, c = map(int, sys.stdin.readline().split())
board = [list(sys.stdin.readline()) for _ in range(r)]
dist = [[0] * c for _ in range(r)]
# 상하좌우
dy = [-1, 1, 0, 0]
dx = [0, 0, -1, 1]

# queue[y,x,s] s: 0:water, 1:people
q = deque()
sy, sx = 0, 0


def bfs():
    q.append([sy, sx, 1])
    dist[sy][sx] = 1
    while q:
        y, x, s = q.popleft()
        for i in range(4):
            ny, nx = y + dy[i], x + dx[i]
            if ny<0 or ny>=r or nx<0 or nx>=c:
                continue
            if board[ny][nx] =='X' or dist[ny][nx]:
                continue
            if board[ny][nx]=='D':
                if s==0:
                    continue
                print(dist[y][x])
                return
            dist[ny][nx] = dist[y][x] + 1
            q.append([ny, nx, s])

    print("KAKTUS")


for i in range(r):
    for j in range(c):
        if board[i][j] == '*':
            q.append([i, j, 0])
            dist[i][j] = 1
        elif board[i][j] == 'S':
            sy, sx = i, j

bfs()
# for i in board:
#     print(*i)

# todo: 3055
# Queue에 고슴도치의 위치와 물의 위치가 들어가므로, 물과 고슴도치를 구별할 flag(s)를 만든다.
# map struct의 변수 s가 1인 경우 고슴도치이며, 0인 경우 물이다.
# 입력받을 때, 물(*)은 곧바로 Queue에 넣고, 고슴도치(S)는 위치를 기억해둔다.
# 입력이 끝난 후, 고슴도치의 위치를 Queue에 넣는다.
# 고슴도치와 물은 돌(X)로 이동할 수 없고, 비어있는 칸(.)으로 이동한다.
# dist 배열을 통해 이동거리를 저장하고, 값이 1 이상인 경우 방문한 장소로 기억한다.
# 다음 이동에서 동굴(D)을 만나면, s 값을 통해 고슴도치인지 물인지 확인한다.
# 물인 경우 무시하고, 고슴도치라면 결과를 출력하고 종료한다.
# Queue가 완전히 빌 때까지 결과를 찾지 못했으면, 동굴에 도착하지 못한 것이므로, KAKTUS를 출력하고 종료한다.
# 출처: https://rebas.kr/661 [PROJECT REBAS]