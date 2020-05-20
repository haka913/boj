s = input()
dic = [-1] * 26
for i in s:
    if(dic[ord(i) - ord('a')] == -1):
        dic[ord(i) - ord('a')] = s.index(i)

print(*dic)
