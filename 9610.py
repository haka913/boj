# Q1,Q2,Q3,Q4,AXIS
lis = [0 for _ in range(5)]
# print(lis)
case = int(input())
for i in range(case):
    x, y = map(int, input().split())
    if x == 0 or y == 0:
        lis[4] += 1
    elif x > 0 and y > 0:
        lis[0] += 1
    elif x < 0 and y > 0:
        lis[1] += 1
    elif x < 0 and y < 0:
        lis[2] += 1
    elif x > 0 and y < 0:
        lis[3] += 1

print("Q1: %d" % lis[0])
print("Q2: %d" % lis[1])
print("Q3: %d" % lis[2])
print("Q4: %d" % lis[3])
print("AXIS: %d" % lis[4])

# z=[0,0,0,0,0]
# for i in range(int(input())):
# 	a,b=map(int,input().split())
# 	if a*b==0:
# 		z[4]+=1
# 	elif a*b>0:
# 		z[int(a+b<0)*2]+=1
# 	else:
# 		z[int(a>b)*2+1]+=1
# for j in range(4):
# 	print("Q%d: %d"%(j+1,z[j]))
# print("AXIS: %d"%z[4])