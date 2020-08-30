// 14888 연산자 끼워넣기
// https://www.acmicpc.net/problem/14888
#include <bits/stdc++.h>

using namespace std;
int n;
int ar[12];
// + - * /
int op[4];
int opMin = 1e9;
int opMax = -1e9;
void operate(int cnt, int result, int add, int sub, int mul, int div) {
    if (cnt == n) {
        opMax = max(opMax, result);
        opMin = min(opMin, result);
        return;
    }
    if (add) {
        operate(cnt + 1, result + ar[cnt], add - 1, sub, mul, div);
    }
    if (sub) {
        operate(cnt + 1, result - ar[cnt], add, sub - 1, mul, div);
    }
    if (mul) {
        operate(cnt + 1, result * ar[cnt], add, sub, mul - 1, div);
    }
    if (div) {
        operate(cnt + 1, result / ar[cnt], add, sub, mul, div - 1);
    }
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> ar[i];
    }
    for (int i = 0; i < 4; i++) {
        cin >> op[i];
    }
    operate(1, ar[0], op[0], op[1], op[2], op[3]);
    cout << opMax << "\n" << opMin;

    return 0;
}