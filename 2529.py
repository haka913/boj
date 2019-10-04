k = int(input())
op = input().split()
check = [False] * 10
max_op, min_op = '', ''


def possible(i, j, k):
    if k == '<':
        return i < j
    if k == '>':
        return i > j
    return True


def dfs(cnt, s):
    global max_op, min_op
    if cnt == k + 1:
        if not len(min_op):
            min_op = s
        else:
            max_op = s
        return

    for i in range(10):
        if not check[i]:
            if cnt == 0 or possible(s[-1], str(i), op[cnt - 1]):
                check[i] = True
                dfs(cnt + 1, s + str(i))
                check[i] = False


dfs(0, '')
print(max_op, min_op, sep='\n')

# 하나의 숫자를 구하기 위해서 입력으로 주어진 길이(N)+1 만큼 재귀 함수를 호출해야 한다. 올바른 부등식은 숫자 개수가 부등호 개수보다 1개 더 많다.
# 재귀 함수 종료 조건 : 숫자 개수(길이) == N+1
# 수를 중복하여 사용할 수 없으므로, check 배열을 별도로 만들어서 사용 여부를 확인해야 한다.
# 재귀 함수를 호출하기 전에, 다음 숫자가 부등식에 맞는지 살펴봐야 한다.
# 예를 들어, 주어진 부등호가 < > > 라면, 0 < 3 > 2 > 1은 가능하다.
# 하지만 3 < 2 > 1 > 0은 불가능하다. 이런 경우, 3 < 2부터 틀린 부등식이므로, 이 뒤로는 함수를 호출할 필요가 없다.
# 재귀 함수 호출을 0부터 9까지 순서대로 부르므로, 정답의 최솟값은 처음 호출된 값이며, 최댓값은 마지막에 호출된 값이다.
# 출처: https://rebas.kr/755 [PROJECT REBAS]
