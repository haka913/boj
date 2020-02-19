n = int(input())
list1 = [input() for _ in range(n)]
size = len(list1[0])
result =''
for i in zip(*list1):
    if len(set(i))==1:
        result +=i[0]
    else:
        result += '?'

print(result)