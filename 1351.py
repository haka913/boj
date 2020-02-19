n, p, q = map(int, input().split())
# print(n,p,q)
dp = {0:1}

# def infiSequence(n):
#     if n in dp:
#         return dp[n]
#     else:
#         result = infiSequence(n // p) + infiSequence(n // q)
#         dp[n] = result
#         return result
        # return dp[n]=infiSequence(n // p) + infiSequence(n // q)
def infiSequence(n):
    if n in dp:
        return dp[n]
    dp[n] = infiSequence(n // p) + infiSequence(n // q)
    return dp[n]
# infiSequence(n)
print(infiSequence(n))
# print(dp)