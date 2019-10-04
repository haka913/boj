n, L = map(int, input().split())

# n = x+(x+1)+...(x+L-1)
# n = Lx + (1+2+...L-1)
# n = Lx+ (L-1)L/2
# x = (n-(L-1)L/2)L
print((n - ((L - 1) * L // 2)) // L)

x = -1
len = 0
for i in range(L, 101):
    t = (i - 1) * i // 2
    if (n - t) % i == 0:
        x = (n - t) // i
        len = i
        break

if x < 0:
    print(-1)
else:
    for i in range(len):
        print(x + i, end=" ")


# n, l = map(int, input().split())
#
# for i in range(l, 101):
#     m = n - i * (i - 1) // 2
#     if m < 0:
#         print(-1)
#         break
#     a, b = divmod(m, i)
#     if not b:
#         print(*range(a, a + i))
#         break
# else:
#     print(-1)