n, k = map(int, input().split())
list1 = []
for _ in range(n):
    list1.append(list(map(int, input().split())))

list1.sort(key=lambda x: (x[1], x[2], x[3]), reverse=True)
idx = [list1[i][0] for i in range(n)].index(k)

while list1[idx-1][1:] == list1[idx][1:]:
    idx-=1

print(idx+1)
