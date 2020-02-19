n = int(input())
list1 = list(map(int, input().split()))
list1.sort()
sum = 0
for i in range(len(list1)):
    sum += (n-i)*list1[i]
print(sum)