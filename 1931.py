# n = int(input())
# list1 = []
# for _ in range(n):
#     list1.append(list(map(int, input().split())))
#
# list1.sort(key=lambda x: [x[1], x[0]])
# t = list1[0][1]
# cnt = 1
# for i in range(1, n):
#     if list1[i][0] >= t:
#         t = list1[i][1]
#         cnt += 1
#
# print(cnt)

n = int(input())
list1 = []
for _ in range(n):
    a,b = map(int,input().split())
    list1.append((b,a))

list1.sort()

t =0
cnt =0
for i in list1:
    if i[1]<t:
        continue
    cnt+=1
    t = i[0]
print(cnt)



