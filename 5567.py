from collections import deque

n = int(input())
m = int(input())
friends = {i + 1: [] for i in range(n+1)}
visited = [0] * (n + 1)
q = deque()
for _ in range(m):
    a, b = map(int, input().split())
    friends[a] += [b]
    friends[b] += [a]

q.append(1)
visited[1] = 1
size = len(q)
# print(size)
answer = 0
cnt = 0
# print(friends)
while q:
    size = len(q)
    for _ in range(size):
        s = q.popleft()
        # print("friends[s] " , friends[s])
        for toFriend in friends[s]:
            if not visited[toFriend]:
                visited[toFriend] = 1
                q.append(toFriend)
                # print("q is " , q)
                answer+=1
                # print("answer plus")
    cnt+=1
    if cnt >1:break
# print(friends)
print(answer)
