s = input()
list1 = []
for i in range(len(s)):
    list1.append(s[i:])

list1.sort()
for i in list1:
    print(i)