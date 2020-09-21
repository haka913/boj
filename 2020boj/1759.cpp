// 1759 암호 만들기
// https://www.acmicpc.net/problem/1759
#include <bits/stdc++.h>

using namespace std;

int L, c;
char ar[15];
// vowel at least 1, consonant at least2
void dfs(int idx, int cntV, int cntC, string s) {
    if (cntV >= 1 && cntC >= 2 && (cntV + cntC) == L) {
        cout << s << '\n';
        return;
    }
    if (idx >= c) return;

    if (ar[idx] == 'a' || ar[idx] == 'e' || ar[idx] == 'i' || ar[idx] == 'o' ||
        ar[idx] == 'u') {
        dfs(idx + 1, cntV + 1, cntC, s + ar[idx]);
    } else {
        dfs(idx + 1, cntV, cntC + 1, s + ar[idx]);
    }
    dfs(idx + 1, cntV, cntC, s);
}

int main() {
    cin >> L >> c;
    for (int i = 0; i < c; i++) {
        cin >> ar[i];
    }
    sort(ar, ar + c);
    string result = "";
    dfs(0, 0, 0, result);
    return 0;
}