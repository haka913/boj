a, b = input().split()
result = 1000000
for i in range(len(b) - len(a)+1):
    cnt = 0
    for j in range(len(a)):
        if a[j] != b[j + i]:
            cnt += 1
    result = min(result, cnt)

print(result)
