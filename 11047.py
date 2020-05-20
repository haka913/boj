n, k = map(int, input().split())
coins = []
for _ in range(n):
    coins.append(int(input()))
coins.reverse()
need_coin = 0
idx = 0
while k!=0:
    if k // coins[idx] != 0:
        need_coin += k // coins[idx]
        k -= (k//coins[idx])*coins[idx]
        idx +=1
    else:
        idx +=1

print(need_coin)