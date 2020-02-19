T = int(input())
for _ in range(T):
    n, k = map(int, input().split())
    list1 = list(map(int, input().split()))
    result=0
    for i in list1:
        result += i//k
    print(result)