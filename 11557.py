case = int(input())

for i in range(case):
    n = int(input())
    dic = {}
    for j in range(n):
        univ, alcohol = map(str, input().split())
        # print(univ, alcohol)
        dic[univ] = int(alcohol)
    # print(dic)
    dic = sorted(dic, key=lambda k: dic[k])
    print(dic[-1])
