case = int(input())

for _ in range(case):
    wordCnt = int(input())
    line = input().split()
    secret = input().split()
    cry = input().split()

    answer = ['']*wordCnt
    for o in range(wordCnt):
        answer[line.index(secret[o])] = cry[o]
    print(' '.join(answer))
