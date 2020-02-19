# n = int(input())
# s = input()
# a = b = 0
# for i in range(len(s)):
#     if s[i] == 'A':
#         a += 1
#     elif s[i] == 'B':
#         b += 1
#
# if a > b:
#     print("A")
# elif b > a:
#     print("B")
# else:
#     print("Tie")

input()
s = input()
a = s.count("A")
b = s.count("B")
print(["Tie", "B", "A"][(a < b) - (b < a)])
print([1,3,5][1])