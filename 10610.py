number = list(input())
isZero =False
tot = 0
for i in number:
    tot += int(i)
    if int(i)==0:
        isZero = True

if tot%3!=0 or not isZero:
    print(-1)
else:
    number.sort(reverse=True)
    print(''.join(number))
# print(tot)
# print(number)

# num = [*input()]
# if '0' not in num or sum(map(int, num))%3 != 0: print(-1)
# else: print(''.join(sorted(num)[::-1]))