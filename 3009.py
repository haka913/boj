# x = {}
# y = {}
#
# for i in range(3):
#     xp, yp = map(int, input().split())
#     if xp in x:
#         x[xp] += 1
#     else:
#         x[xp] = 1
#
#     if yp in y:
#         y[yp] += 1
#     else:
#         y[yp] = 1
#
# print(x, y)
# sorted_x = sorted(x, key=lambda k: x[k])
# sorted_y = sorted(y, key=lambda k: y[k])
#
#
# print(sorted_x[0], sorted_y[0])
# # print(sorted_x[1])


# x, y = [0] * 3, [0] * 3
# for i in range(3):
#     x[i], y[i] = map(int, input().split())
# # print(x,y)
# print(min(x, key = x.count), min(y, key = y.count))