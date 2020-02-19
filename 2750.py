n = int(input())
a = []
for i in range(n):
    a.append(int(input()))

a.sort()

print(*a,sep='\n')

# import sys
# input()
# print(*sorted(map(int,sys.stdin)))