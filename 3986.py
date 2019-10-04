t = int(input())
result = 0
for _ in range(t):
    s = input()
    stack = []
    for i in s:
        if not stack or stack[-1] != i:
            stack.append(i)
        else:
            stack.pop()
    if not stack:
        result+=1

print(result)



# c=0
# for i in range(int(input())):
#  S=[]
#  for j in input():S.pop()if S and S[-1]==j else S.append(j)
#  c+=not S
# print(c)