import sys
sys.setrecursionlimit(10**9)
n, q = map(int, sys.stdin.readline().split())
arr = list(map(int, sys.stdin.readline().split()))

for _ in range(q):
    x, y, a, b = map(int, sys.stdin.readline().split())
    x, y = min(x, y), max(x, y)
    print(sum(arr[x-1:y]))
    arr[a-1],arr[b-1] = arr[b-1],arr[a-1]


#todo: 1275