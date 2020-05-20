n = int(input())
ropes=[]
for _ in range(n):
    ropes.append(int(input()))
ropes.sort(reverse=True)
result =0
for i in range(len(ropes)):
    tmp = ropes[i]*(i+1)
    result = max(result,tmp)
print(result)