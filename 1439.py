s = input()
cnt_zero = 0
cnt_one = 0
if s[0] == '0':
    cnt_zero += 1
else:
    cnt_one += 1

for i in range(1, len(s)):
    if s[i] != s[i - 1]:
        if s[i] == '0':
            cnt_zero += 1
        else:
            cnt_one += 1

print(min(cnt_zero, cnt_one))

# import re
# s= input()
# cnt_zero = len(re.findall('0+', s))
# cnt_one = len(re.findall('1+', s))
# print(min(cnt_zero,cnt_one))