# number = 665
# n = int(input())
# cnt = 0
# while cnt != n:
#     number += 1
#     temp = 0
#     for i in str(number):
#         if temp == 3:
#             break
#         if i == '6':
#             temp += 1
#         else:
#             temp = 0
#     if temp == 3:
#         cnt += 1
# print(number)

n = int(input())
cnt = 1
i = 666
while cnt < n:
    i += 1
    s = str(i)
    if '666' in s:
        cnt += 1
print(i)
