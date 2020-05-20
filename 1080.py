n, m = map(int, input().split())

a = []
b = []
for i in range(n):
    list1 = list(map(int, ' '.join(input()).split()))
    a.append(list1)

for i in range(n):
    list1 = list(map(int, ' '.join(input()).split()))
    b.append(list1)


def swt(i, j):
    for y in range(i - 1, i + 2):
        for x in range(j - 1, j + 2):
            a[y][x] = 1 - a[y][x]


cnt = 0
# n-1, m-1임 n,m이 아님
for i in range(1, n - 1):
    for j in range(1, m - 1):
        if a[i - 1][j - 1] != b[i - 1][j - 1]:
            swt(i, j)
            cnt += 1

# print(a, b)
print(cnt if a == b else -1)



# s = input()
# list1 = []
# list1.extend(s)
# list1 = list(map(int, list1))
#
# =a = list(map(int, ' '.join(input()).split()))


n, m = map(int, input().split())
a, b, res = [list(map(int, input())) for i in range(n)], [list(map(int, input())) for i in range(n)], 0
print(a)
print(b)


def change(l, x, y):
    for i in range(y, y + 3):
        for j in range(x, x + 3):
            l[i][j] = 1 - l[i][j]


for y in range(n - 2):
    for x in range(m - 2):
        if (a[y][x] != b[y][x]):
            res += 1
            change(a, x, y)
print(res) if a == b else print(-1)
