s = input()
# print(s)
# print(len(s))
palindrome = True
print(s[:-1])
for i in range(len(s) // 2):
    # print(s[i], s[len(s)-i-1])
    if s[i] != s[len(s) - 1 - i]:
        palindrome = False
        break

# if palindrome:
#     print(1)
# else:
#     print(0)
print(1 if palindrome else 0)

# short coding    #
# if s == s[::-1]:
#     print("1")
# else:
#     print("0")
