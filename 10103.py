chang = sang = 100
case = int(input())

for i in range(case):
    c1, s1 = map(int, input().split())
    if (c1 > s1):
        sang -= c1
    elif (c1 < s1):
        chang -= s1

print(chang)
print(sang)

