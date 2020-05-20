def lcm(x, y):
    import math
    return x * y // math.gcd(x, y)


case = int(input())

for i in range(case):
    a, b = map(int, input().split())
    print(lcm(a, b))

# g = lambda a, b: b and g(b, a % b) or a
# exec("a,b=map(int,input().split());print(a*b//g(a,b));" * int(input()))
