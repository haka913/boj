cnt = 0
# swt = 0  # 0: odd 1: even
for i in range(8):
    list1 = list(input())
    for j in range(len(list1)):
        if i%2 == 0 and j % 2 == 0 and list1[j] == 'F':
            cnt += 1
        elif i%2 == 1 and j % 2 == 1 and list1[j] == 'F':
            cnt += 1

print(cnt)
