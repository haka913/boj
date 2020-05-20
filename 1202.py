import sys
import heapq

n, k = map(int, sys.stdin.readline().split())
list1 = []
for _ in range(n):
    m, v = map(int, sys.stdin.readline().split())
    list1.append([m, v])
bag = []
for _ in range(k):
    bag.append(int(sys.stdin.readline()))
list1.sort()
bag.sort()

result = 0
idx =0
heap = [] # maxheap

for i in range(k):
    while idx <n and list1[idx][0] <=bag[i]:
        heapq.heappush(heap, (-list1[idx][1],list1[idx][1]))#(우선순위,값) maxheap
        idx+=1

    if heap:
        result += heapq.heappop(heap)[1]

# print(list1)
# print(bag)
print(result)



# from sys import stdin
# import queue
# n,k=(int(x) for x in stdin.readline().split())
# m,t,r=[],0,0
# for _ in range(n):
# 	m.append([int(x) for x in stdin.readline().split()])
# for _ in range(k):
# 	m.append([int(stdin.readline()), 1000001])
# m=sorted(m)
# q=queue.PriorityQueue(n)
# for a in m:
# 	if a[1] < 1000001:
# 		q.put(-a[1])
# 	elif not q.empty():
# 		r = r + -q.get()
# print(r)


# import heapq
# import sys
#
# N, K = map(int, sys.stdin.readline().split())
# Js = []
# Bags = []
# a = []
# for _ in range(N):
#     a.append(list(map(int, sys.stdin.readline().split())))
# for _ in range(K):
#     a.append([int(sys.stdin.readline()), 10**7])
#
# a.sort()
# ans = 0
# hq = []
# for x in a:
#     if x[1] != 10**7:
#        heapq.heappush(hq, (-x[1]))
#     else:
#         if len(hq) != 0:
#             v = heapq.heappop(hq)
#             ans += -v
#
# print(ans)