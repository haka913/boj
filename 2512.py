n = int(input())
budgets = list(map(int, input().split()))
M = int(input())


def budget(budgets, M):
    lo = 0
    hi = max(budgets)
    answer = 0
    budgets.sort()
    while hi >= lo:
        mid = (lo + hi) // 2
        result = 0
        for i in budgets:
            if mid > i:
                result += i
            else:
                result += mid
        if result > M:
            hi = mid - 1
        else:
            if result >= answer:
                answer = mid
            lo = mid + 1
    return answer


print(budget(budgets, M))

# n = int(input())
# reg = list(map(int,input().split()))
# tot = int(input())
# k = 0
# reg.sort()
# for i in range(n):
#     if tot < reg[i] * (n-i):
#         break
#     k += 1
#     tot -= reg[i]
# if k == n:
#     print(reg[n-1])
# else:
#     print(tot//(n-k))
