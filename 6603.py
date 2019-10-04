from itertools import combinations

while True:
    a = input().split()
    if a.pop(0) == '0':
        break
    for a in combinations(a, 6):
        print(" ".join(a))
    print()



# c++

# #include <cstdio>
# #include <algorithm>
# using namespace std;
#
# void solve(int n) {
#     int c[n] = {0, };
#     for (int i=0; i<6; i++) c[i] = 1;
#     int a[n];
#     for (int i=0; i<n; i++) scanf("%d", &a[i]);
#     do {
#         for (int i=0; i<n; i++) {
#             if (c[i]) printf("%d ", a[i]);
#         }
#         printf("\n");
#     } while (prev_permutation(c, c+n));
#     printf("\n");
# }
#
# int main() {
#     int n;
#     while (true) {
#         scanf("%d", &n);
#         if (n == 0) break;
#         solve(n);
#     }
#     return 0;
# }
#
#
# 출처: https://rebas.kr/687 [PROJECT REBAS]