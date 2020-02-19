import sys
T = int(sys.stdin.readline())
# T = int(input())

for _ in range(T):
    # n = int(input())
    n = int(sys.stdin.readline())
    list1 = []
    for _ in range(n):
        score, rank = map(int, sys.stdin.readline().split())
        list1.append([score, rank])

    list1.sort()
    tmpMax = list1[0][1]
    cnt = 1
    for i in range(1, len(list1)):
        if list1[i][1] < tmpMax:
            tmpMax = list1[i][1]
            cnt += 1
            if tmpMax ==1:
                break
    print(cnt)

# 서류심사의 성적을 오름차순으로 정렬했을 때, 뒤의 지원자의 서류심사 성적은 무조건 앞의 지원자 보다 낮게 된다.
# 이 때, 면접성적까지 앞의 지원자보다 낮게 된다면 합격자가 될 수 없으므로 패쓰!
# 면접성적이 앞의 지원자들보다 좋다면 합격이고, 그 성적이 면접성적의 합격 기준이되며 반복

# 7
# 3 6
# 7 3
# 4 2
# 1 4
# 5 7
# 2 5
# 6 1
# 1. 서류심사를 오름차순대로 정렬
# 1 4
# 2 5
# 3 6
# 4 2
# 5 7
# 6 1
# 7 3
# 2. 면접성적을 차례대로 비교
# 1 4 <- 다음에 올 사람은 면접성적이 4위보다 좋아야 함 (count : 1)
# 2 5 <- Pass
# 3 6 <- Pass
# 4 2 <- 다음에 올 사람은 면접성적이 2위보다 좋아야 함 (count : 2)
# 5 7 <- Pass
# 6 1 <- 다음에 올 사람은 면접성적이 1위보다 좋아야 함 / 불가능 (count : 3)
# 7 3 <- Break


# import sys
#
# T = int(sys.stdin.readline())
#
# for t in range(T):
# 	n = int(sys.stdin.readline())
# 	scores = [0]*(n+1)
# 	for _ in range(n):
# 		a,b = sys.stdin.readline().strip().split(' ')
# 		scores[int(a)] = int(b)
# 	cnt = 1
# 	top = scores[1]
# 	for i in range(2,n+1):
# 		if top == 1:
# 			break
# 		else:
# 			if scores[i] < top:
# 				top = scores[i]
# 				cnt += 1
# 	print(cnt)