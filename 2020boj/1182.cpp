// 1182 부분수열의 합
// https://www.acmicpc.net/problem/1182
#include <bits/stdc++.h>

using namespace std;

int n, s;
int ar[20];
int result = 0;
void dfs(int idx, int res) {
    if (idx >= n) {
        if (res == s) result++;
        return;
    }
    dfs(idx + 1, res + ar[idx]);
    dfs(idx + 1, res);
}
int main() {
    cin >> n >> s;
    for (int i = 0; i < n; i++) {
        cin >> ar[i];
    }
    sort(ar, ar + n);
    dfs(0, 0);
    // s==0 ->empty(-1)
    if (s == 0) result--;
    cout << result;
    return 0;
}