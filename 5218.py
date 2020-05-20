t = int(input())
for _ in range(t):
    s1, s2 = input().split()
    dist =[]
    for i, j in zip(s1, s2):
        if j>=i:
            dist.append(ord(j)-ord(i))
        else:
            dist.append(ord(j)-ord(i)+26)
    print("Distances:", *dist)