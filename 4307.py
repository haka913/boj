import sys
t = int(sys.stdin.readline().rstrip())
for _ in range(t):
    l, n = map(int, sys.stdin.readline().split())
    minTime, maxTime = 0, 0
    for _ in range(n):
        ant = int(sys.stdin.readline())
        antMin = min(ant, l-ant)
        antMax = max(ant, l-ant)

        minTime = max(minTime, antMin)
        maxTime = max(maxTime, antMax)

    print(minTime, maxTime)