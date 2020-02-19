case = int(input())
maxM = 0
money = 0
for i in range(case):
    a, b, c = map(int, input().split())
    if a == b and a == c:
        money = 10000 + (a * 1000)
    elif a != b and b != c and a != c:
        money = max(a, max(b, c)) * 100
    else:
        if a == b:
            money = 1000 + (a * 100)
        elif a == c:
            money = 1000 + (a * 100)
        elif b == c:
            money = 1000 + (b * 100)

    maxM = max(maxM, money)

print(maxM)
