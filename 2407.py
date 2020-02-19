# 조합

n, m = map(int, input().split())

dp = [[0] * 101 for _ in range(101)]


def combi(n, m):
    if n == m or m == 0:
        return 1
    if dp[n][m] > 0:
        return dp[n][m]

    dp[n][m] = combi(n - 1, m - 1) + combi(n - 1, m)
    return dp[n][m]


print(combi(n, m))
