import sys
n = int(sys.stdin.readline())
list1 = []
for _ in range(n):
    list1.append(int(sys.stdin.readline()))

list1.sort(reverse=True)
tip = 0
for i in range(len(list1)):
    tip += max(0, list1[i]-i)

print(tip)
# 원래주려던돈-(받은등수-1)


# import sys
# n, *l = map(int, sys.stdin.readlines())
#
# l.sort(reverse = True)
# ans = 0
#
# for i in range(n):
#     ans += max(l[i]-i, 0)
#
# print(ans)
