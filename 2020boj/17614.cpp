// 17614 369
// https://www.acmicpc.net/problem/17614
#include <bits/stdc++.h>

using namespace std;
int n;
int cnt = 0;
int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        int tmp = i;
        while (tmp > 0) {
            int ttmp = tmp % 10;
            if (ttmp == 3 || ttmp == 6 || ttmp == 9) {
                cnt++;
            }
            tmp = tmp / 10;
        }
    }
    cout << cnt;
    return 0;
}