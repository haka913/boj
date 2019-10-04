# 그냥 dictionary로도 가능
# db = {
#     "A+":4.3, "A0":4.0, "A-":3.7,
#     "B+":3.3, "B0":3.0, "B-":2.7,
#     "C+":2.3, "C0":2.0, "C-":1.7,
#     "D+":1.3, "D0":1.0, "D-":0.7,
#     "F":0.0
# }
# print(db[input()])

s = input()
score = 0.0
if s[0] == 'A':
    score = 4.
    if s[1] == '+':
        score += .3
    elif s[1] == '-':
        score -= .3
elif s[0] == 'B':
    score = 3.
    if s[1] == '+':
        score += .3
    elif s[1] == '-':
        score -= .3
elif s[0] == 'C':
    score = 2.
    if s[1] == '+':
        score += .3
    elif s[1] == '-':
        score -= .3
elif s[0] == 'D':
    score = 1.
    if s[1] == '+':
        score += .3
    elif s[1] == '-':
        score -= .3

print(score)