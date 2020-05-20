import math
a, b = map(int, input().split(':'))
print("%d:%d"%(a/math.gcd(a,b), b/math.gcd(a,b)))
# print(str(int(a/math.gcd(a,b)))+':'+ str(int(b/math.gcd(a,b))))

