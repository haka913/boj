n = int(input())
cnt = 2
while (n > 1):
    if (n % cnt != 0):
        while (n % cnt != 0):
            cnt += 1
    n /= cnt
    print(cnt)
