from collections import defaultdict

n,k = map(int, input().split())
list1 = list(map(int,input().split()))
dict1 = defaultdict(lambda : 0)
for i in list1:
    dict1[i] +=1
print(list1)
print(dict1)