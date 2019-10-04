list1 = []
for _ in range(9):
    list1.append(int(input()))

list1.sort()
tmp1, tmp2 = 0, 0
for i in range(9):
    for j in range(i + 1, 9):
        if sum(list1) - list1[i] - list1[j] == 100:
            tmp1, tmp2 = list1[i], list1[j]
            break

list1.remove(tmp1)
list1.remove(tmp2)
for i in list1:
    print(i)
