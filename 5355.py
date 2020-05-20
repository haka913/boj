case = int(input())


# print('%.2f' % case)
def switch(x):
    return {'@': "*3", '%': "+5", '#': "-7"}.get(x)


for i in range(case):
    str1 = input().split()
    # n = float(str1[0])
    n = str1[0]
    del str1[0]

    ret = n
    for s in str1:
        s = switch(s)
        ret = eval(str(ret) + s)
    print('%.2f' % float(ret))

    # for s in str:
    #     if s == '@':
    #         n *= 3
    #     elif s == '%':
    #         n += 5
    #     elif s == '#':
    #         n -= 7

    # print('%.2f' % n)
