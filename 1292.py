a, b = map(int, input().split())
# list1 = [0]*1000
# idx = 0
# for i in range(1,1001):
#     for j in range(i):
#         if idx ==1000:
#             break
#         list1[idx] = i
#         idx+=1
list1 = []
for i in range(46):
    list1 += [i] * i

print(sum(list1[a - 1:b]))
print(list1)
