import sys

for _ in range(int(sys.stdin.readline())):
    n = int(sys.stdin.readline())
    sticker = [list(map(int, sys.stdin.readline().split())) for _ in range(2)]
    dp = [[0]*3 for _ in range(n+1)]

    for i in range(1,n+1):
        dp[i][0] = max(dp[i-1][0],dp[i-1][1],dp[i-1][2])
        dp[i][1] = max(dp[i-1][0],dp[i-1][2])+sticker[0][i-1]
        dp[i][2] = max(dp[i-1][0],dp[i-1][1])+sticker[1][i-1]
    # print(sticker)
    # print(dp)
    print(max(dp[n]))

# D[N][0] : N번째 열에서 둘 다 뜯지 않고 얻은 최대 점수
# D[N][1] : N번째 열에서 위쪽 스티커를 뜯어서 얻은 최대 점수
# D[N][2] : N번째 열에서 아래쪽 스티커를 뜯어서 얻은 최대 점수
#
#
# 출처: https://rebas.kr/834 [PROJECT REBAS]