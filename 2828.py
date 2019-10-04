n, m = map(int, input().split())
j = int(input())
start, end = 1, m
result = 0
for i in range(j):
    apple = int(input())
    if apple > end:
        result += apple - end
        end = apple
        start = end - m + 1
    elif apple < start:
        result += start - apple
        start = apple
        end = start + m - 1

print(result)
