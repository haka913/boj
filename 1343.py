a = 'AAAA'
b = 'BB'
s = input()
s_size = len(s)
# list1 = s.split('.')
# list1 = ['.' if w == '' else w for w in list1]
result = ''
idx = 0
flag = True
while idx < s_size:
    if s[idx] == '.':
        idx += 1
        result += '.'
    else:
        iidx = 0
        while idx < s_size and s[idx] == 'X':
            iidx += 1
            idx += 1
        if iidx % 2 == 1:
            flag = False
            break
        while iidx != 0:
            if iidx>=4:
                iidx-=4
                result +=a
            else:
                iidx-=2
                result +=b
            # if iidx % 4 == 0:
            #     result += a * ((iidx) // 4)
            #     iidx = iidx % 4
            # elif iidx % 2 == 0:
            #     result += b * ((iidx) // 2)

print(result if flag else -1)


# a=input().replace('XXXX','AAAA').replace('XX','BB')
# print(-1 if'X'in a else a)







# result = []
# flag = True
# for w in list1:
#     if w == '.':
#         result.append('.')
#     else:
#         if len(w) % 4 == 0:
#             result.append(a * (len(w) // 4)+'.')
#         elif len(w) % 4 == 2:
#             result.append(a * (len(w) // 4) + b+'.')
#         else:
#             flag = False
#             break

# print(''.join(result).rstrip('.') if flag else -1)
# while len(result)!=len(s):
