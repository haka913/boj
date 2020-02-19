n,m = map(int, input().split())
if n==1:
    print(1)
elif n==2:
    # 4인 이유, 시작칸 1도 포함하므로1+3이 최대
    print(min(4,(m+1)//2))
else:
    if m<7:
        print(min(4, m))
    else:
        print(m-2)