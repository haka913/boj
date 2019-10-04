a = []
for _ in range(int(input())):
    a.append(input())

for i in a:
    if i[::-1] in a:
        print(len(i),i[len(i)//2])
        break