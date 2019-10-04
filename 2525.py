a, b = map(int, input().split())
c = int(input())
# print(type(a))
# print(a)
if (b + c <= 59):
    print(a, b + c)
else:
    minute = (b + c) % 60
    hour = (b + c) // 60
    print((a + hour) % 24, minute)
