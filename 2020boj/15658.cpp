// 15658 연산자 끼워넣기(2)
// https://www.acmicpc.net/problem/15658
#include <bits/stdc++.h>

using namespace std;
int n;
int ar[11];
// + - * /
int op[4];
int resMin = 1e9;
int resMax = -1e9;
void dfs(int idx, int res, int add, int sub, int mult, int div) {
    if (idx >= n) {
        if (res > resMax) resMax = res;
        if (res < resMin) resMin = res;
        return;
    }
    if (add > 0) dfs(idx + 1, res + ar[idx], add - 1, sub, mult, div);
    if (sub > 0) dfs(idx + 1, res - ar[idx], add, sub - 1, mult, div);
    if (mult > 0) dfs(idx + 1, res * ar[idx], add, sub, mult - 1, div);
    if (div > 0) dfs(idx + 1, res / ar[idx], add, sub, mult, div - 1);
}
int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> ar[i];
    }
    for (int i = 0; i < 4; i++) {
        cin >> op[i];
    }
    dfs(1, ar[0], op[0], op[1], op[2], op[3]);

    cout << resMax << "\n" << resMin;
    return 0;
}
