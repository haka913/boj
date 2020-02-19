import math
n = int(input())
a = list(map(int, input().split()))
b, c = map(int, input().split())

a[:]=[x-b for x in a]
result = n
for i in a:
    if i>0:
        result += math.ceil(i/c)

print(result)

# input()
# a = map(int, input().split())
# n, m = map(int, input().split())
# r = 0
# for x in a:
#     r += (x - n + m - 1) // m + 1 if x > n else 1
# print(r)