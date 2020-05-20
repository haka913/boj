n, m = map(int, input().split())
# board =[[0]*m for i in range(n)]
board = []
for i in range(n):
    s = input()
    list1 = []
    list1.extend(s)
    list1 = list(map(int, list1))
    board.append(list1)


# print(board)

def solution(board):
    cnt = 0
    for row in range(len(board)):
        for col in range(len(board[0])):
            # print(board[row][col], end=" ")
            if board[row][col]:
                isRec = min(board[row - 1][col - 1], board[row - 1][col], board[row][col - 1])
                if isRec and row and col:
                    board[row][col] = isRec + 1
                if board[row][col] > cnt:
                    cnt = board[row][col]
    answer = cnt ** 2
    return answer


print(solution(board))

# m, n = map(int, input().split())
# l = [list(map(int, list(input()))) for k in range(m)]
# a = max(l[0] + [x[0] for x in l])
# for i in range(1, m):
#     for j in range(1, n):
#         if l[i][j] != 0:
#             l[i][j] = min(l[i - 1][j], l[i - 1][j - 1], l[i][j - 1]) + 1
#             a = max(a, l[i][j])
# print(a ** 2)
