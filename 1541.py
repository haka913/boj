s = input()

list1 = s.split('-')
for i in range(len(list1)):
    list1[i] = sum(list(map(int, list1[i].split('+'))))

s = '-'.join(str(i) for i in list1)
print(eval(s))

# s = input().split('-')
# v = int(sum(map(int, s[0].split('+'))))
# for x in s[1:]:
#     v -= sum(map(int, x.split('+')))
# print(v)

# a = input().split('-')
# print (sum(map(lambda x : sum(map(lambda y: -int(y), x.split('+'))), a)) +sum(map(lambda x: int(x), a[0].split('+')))*2)