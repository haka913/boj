t = int(input())

for i in range(t):
    base, num = map(str, input().split())
    base = int(base)
    d = sum(map(lambda i: i * num.count(str(i)), range(1, base)))
    # d = list(map(lambda i: i * num.count(str(i)), range(1, base)))
    print(d % (base - 1))

# for i in range(t):
#     base, num = map(str, input().split())
#     num = num[::-1]
#     base = int(base)
#     ret = 0
#     for i in range(len(num)):
#         ret += int(num[i]) * pow(base, int(i), base - 1)
#     print(ret % (base - 1))

# for i in range(t):
#     base, num = map(str, input().split())
#     if int(base) == 2:
#         print(0)
#     else:
#         ret = int(num, int(base)) % (int(base) - 1)
#         ret = int(str(ret), (int(base) - 1))
#         print(ret)
