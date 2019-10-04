n,m,h = map(int, input().split())
a = [[0]*n for _ in range(h)]
for _ in range(m):
    y,x = map(int, input().split())
    a[y-1][x-1]=1

result =4
def isLadder():
    for i in range(n):
        k = i
        for j in range(h):
            if a[j][k]:
                k+=1
            elif k>0 and a[j][k-1]:
                k-=1
        if i!=k:
            return False
    return True

def ladder(cnt, y,x):
    global result
    if result <=cnt:
        return
    if isLadder():
        result = min(result, cnt)
    if cnt ==3:
        return
    for i in range(y,h):
        k = x if i==y else 0
        for j in range(k, n-1):
            if a[i][j]:
                j+=1
            else:
                a[i][j]=1
                ladder(cnt+1, i,j+2)
                a[i][j]=0

ladder(0,0,0)
print(result if result <4 else -1)
# todo 15684
# 5 5 6
# 1 1
# 3 2
# 2 3
# 5 1
# 5 4