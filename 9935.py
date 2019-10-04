import sys
s = sys.stdin.readline().rstrip()
bomb = sys.stdin.readline().rstrip()
allGone = "FRULA"
stack = []
for i in s:
    stack.append(i)
    if(len(stack)>=len(bomb)):
        if bomb == ''.join(stack[-len(bomb):]):
            [stack.pop() for _ in range(len(bomb))]

print(''.join(stack) if stack else allGone)
# s = s.replace(bomb,'')
# while s.find(bomb)!=-1:
#     s = s.replace(bomb,'')
# print(allGone if not s else s)