n, m, k = map(int, input().split())
print(min(n//2,m, (n+m-k)//3))


# 1. 대회에 보낼 인원이 없을 경우
# i) 여자 인원 / 2
# ii) 남자 인원
#
# 2. 대회에 보낼 인원이 있을 경우
# (여자 인원 + 남자 인원 - 대회에 보낼 인원) / 3