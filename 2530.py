a, b, c = map(int, input().split())
d = int(input())
if (c + d <= 59):
    print(a,b,c+d)
else:
    second = (c+d)%60
    minute_up = (c+d)//60
    if (b + minute_up  <= 59):
        print(a, b + minute_up, second)
    else:
        minute = (b + minute_up) % 60
        hour = (b + minute_up) // 60
        print((a + hour) % 24, minute,second)
