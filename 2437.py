n= int(input())
list1 = list(map(int, input().split()))

list1.sort()
scale_min = 1
for i in list1:
    if scale_min<i:
        break
    scale_min +=i

print(scale_min)