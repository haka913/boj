import sys
def reversed_string(x):
    return x[::-1]
s = sys.stdin.read()
lis = s.split()
del lis[0]
for i in range(len(lis)):
    lis[i] = int(reversed_string(lis[i]))
lis.sort()
for i in lis:
    print(i)

# import sys
# n, *a = sys.stdin.read().split()
# for x in sorted(int(x[::-1]) for x in a):
#     print(x)