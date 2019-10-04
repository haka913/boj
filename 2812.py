n, k = map(int, input().split())
s = input()
idx = 0
result = []
while idx != len(s):
    while k != 0 and result and result[-1] < s[idx]:
        result.pop()
        k -= 1

    result.append(s[idx])
    idx += 1
for i in range(k):
    result.pop()

print(''.join(result))
