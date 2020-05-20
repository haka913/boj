# while True:
#     h, p = map(int, input().split())
#     print(round(h/p,2))

from sys import stdin

for line in stdin:
    h,p = map(int, line.split())
    print('%.2f'%(h/p))
