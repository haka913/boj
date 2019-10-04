import heapq

n = int(input())
board = [list(map(int, input().split())) for _ in range(n)]
q = []
dx, dy = [-1, 0, 1, 0], [0, -1, 0, 1]
for i in range(n):
    for j in range(n):
        if board[i][j] == 9:
            heapq.heappush(q, (0, i, j))
            board[i][j] = 0
            break


def bfs():
    body, eat, result = 2, 0, 0
    check = [[False] * n for _ in range(n)]
    while q:
        d, x, y = heapq.heappop(q)
        if 0 < board[x][y] < body:
            eat += 1
            board[x][y] = 0
            if eat == body:
                body += 1
                eat = 0
            result += d
            d = 0
            while q:
                q.pop()
            check = [[False] * n for _ in range(n)]
        for i in range(4):
            nd, nx, ny = d + 1, x + dx[i], y + dy[i]
            if nx < 0 or nx >= n or ny < 0 or ny >= n:
                continue
            if 0 < board[nx][ny] > body or check[nx][ny]:
                continue
            check[nx][ny] = True
            heapq.heappush(q, (nd, nx, ny))
    print(result)


bfs()

# 아기 상어가 물고기를 먹으면서 움직이는 최단 거리를 구하는 문제다. 여러 가지 조건이 까다로운 문제다. 첫 번째, 아기 상어는 자신보다 크거나 같은 크기의 물고기를 먹을 수 없다.
# 두 번째, 상어에게 가장 가까운 위치에 있는 물고기를 우선순위로 먹어야 한다.
# 세 번째, 여러 마리가 가까이에 있다면, 가장 위쪽에 있는 물고기, 그다음 순서로 가장 왼쪽에 있는 물고기를 우선순위로 먹어야 한다.
# 이 세 가지 조건을 모두 만족하면서 BFS 탐색을 하기 위해서는, 최소 힙(Min Heap)이 구현된 우선순위 큐(Priority Queue)를 사용하면 된다.
#
#
# 상어의 크기(body), 물고기를 먹은 횟수(eat)를 별도로 저장하는 변수를 둔다.
# BFS에 사용할 큐를 우선순위 큐로 대체한다. C++의 경우 priority_queue가 기본적으로 Max Heap이므로, 연산자 오버로딩을 통해 Min Heap으로 바꿔야 한다.
# 또는 음수로 처리하면 Min Heap처럼 이용할 수 있다. 파이썬은 Heapq를 사용하면 된다.
# Min Heap의 우선순위는 이동 거리(d), 행 좌표(x), 열 좌표(y) 순위로 둔다. 문제에 주어진 우선순위가 거리가 가까운 것, 가장 위쪽, 가장 왼쪽 순서이기 때문이다.
# 물고기의 크기가 상어보다 크거나 같다면, 먹지 못하는 경우이므로 무시하고 지나가면 된다.
# 상어가 물고기를 먹기 전까지, 움직일 때마다 이동거리를 1씩 증가시킨다.
# 움직이다가, 상어 크기보다 작은 크기의 물고기를 발견하면 먹는다. 먹은 칸을 0으로 바꾼다. 정답에 현재까지 이동한 거리를 더한다. 먹은 횟수를 1 증가시킨다.
# 만약 먹은 횟수가 상어의 크기와 같다면, 상어 크기를 1 증가시키고, 먹은 횟수를 0으로 만든다.
# 다음 물고기를 먹기 위해 움직일 때, 이미 갔던 곳을 다시 방문할 수도 있다. 따라서 거리와 방문 체크 배열을 모두 초기화한다. 큐에 들어있는 좌표도 비운다.
# 더 이상 먹을 수 있는 물고기가 없다면 종료한다.


# todo:16236