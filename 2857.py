list1 = []
for i in range(1, 6):
    s = input()
    if s.find('FBI') != -1:
        list1.append(i)
if list1:
    print(*list1)
else:
    print("HE GOT AWAY!")


# if not[print(i) for i in range(1,6)if'FBI'in input()]:print('HE GOT AWAY!')