from itertools import combinations

n, m = map(int, input().split())
a = [list(map(int, input().split())) for _ in range(n)]
home = []
chicken = []
ans = 10 ** 9
for i in range(n):
    for j in range(n):
        if a[i][j] == 1:
            home.append((i + 1, j + 1))
        elif a[i][j] == 2:
            chicken.append((i + 1, j + 1))

for i in combinations(chicken, m):
    s = 0
    for x, y in home:
        d = 10 ** 9
        for dx, dy in i:
            d = min(d, abs(x - dx) + abs(y - dy))
        s += d
    ans = min(ans, s)

print(ans)


# n, m = map(int, input().split())
# a = [list(map(int, input().split())) for _ in range(n)]
# home, chicken, v = [], [], []
# ans = 1e9
#
# def solve(idx, cnt):
#     global ans
#     if idx > len(chicken):
#         return
#     if cnt == m:
#         s = 0
#         for hx, hy in home:
#             d = 1e9
#             for j in v:
#                 cx, cy = chicken[j]
#                 d = min(d, abs(hx-cx)+abs(hy-cy))
#             s += d
#         ans = min(ans, s)
#         return
#     v.append(idx)
#     solve(idx+1, cnt+1)
#     v.pop()
#     solve(idx+1, cnt)
#
# for i in range(n):
#     for j in range(n):
#         if a[i][j] == 1:
#             home.append((i+1, j+1))
#         elif a[i][j] == 2:
#             chicken.append((i+1, j+1))
# solve(0, 0)
# print(ans)


# from itertools import  combinations
#
# n,m=map(int,input().split())
# c_map=[list(map(int,input().split()))  for _ in range(n)]
#
# shop=[[i,j] for i in range(n) for j in range(n) if c_map[i][j]==2]
# house=[[i,j] for i in range(n) for j in range(n) if c_map[i][j]==1]
# end=[]
# for i in list(combinations(shop,m)):
#     result=0
#     for j in house:
#         dst=[]
#         for k in i:
#             dst.append(abs(j[0]-k[0])+abs(j[1]-k[1]))
#         result+=(min(dst))
#     end.append(result)
# print(min(end))