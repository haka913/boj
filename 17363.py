n, m = map(int, input().split())
list1 = []
real = ['.', 'O', '-', '|', '/', '\\', '^', '<', 'v', '>']
chn = [46, 79, 124, 45, 92, 47, 60, 118, 62, 94]
for i in range(n):
    list1.append(list(input()))
for y in range(n):
    for x in range(m):
        # print(chr(chn[real.index(list1[y][x])]))
        list1[y][x] = chr(chn[real.index(list1[y][x])])

# for i in list1:
#     print(i)

list2 = [list(x) for x in zip(*list1)]
list2.reverse()
# for i in list2:
#     print(i)
for i in range(m):
    print(''.join(list2[i]))
