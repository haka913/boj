s = input()
length = 0
for i in range(len(s)):
    if i == 0:
        length += 10
    else:
        if s[i - 1] == s[i]:
            length += 5
        else:
            length += 10

print(length)
