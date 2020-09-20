// 2164 카드2
// https://www.acmicpc.net/problem/2164
#include <bits/stdc++.h>

using namespace std;

int n;
int main() {
    cin >> n;
    queue<int> q;
    for (int i = 1; i <= n; i++) {
        q.push(i);
    }
    while (q.size() != 1) {
        q.pop();
        int tmp = q.front();
        q.pop();
        q.push(tmp);
    }
    cout << q.front();

    return 0;
}