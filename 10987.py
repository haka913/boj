s = input()
cnt =0
cnt +=s.count('a')
cnt +=s.count('e')
cnt +=s.count('i')
cnt +=s.count('o')
cnt +=s.count('u')
print(cnt)


# print(sum(map(input().count,"aeiou")))
# print(sum(i in"aeiou"for i in input()))