// 2644 촌수계산
// https://www.acmicpc.net/problem/2644
#include <bits/stdc++.h>

using namespace std;
int ar[101][101];
int dist[101];
int main() {
    int n;
    int a, b;
    int m;
    cin >> n;
    cin >> a >> b;
    cin >> m;
    for (int i = 0; i < m; i++) {
        int x, y;
        cin >> x >> y;
        ar[x][y] = 1;
        ar[y][x] = 1;
    }
    queue<int> q;
    q.push(a);
    while (!q.empty()) {
        int p = q.front();
        q.pop();
        for (int i = 1; i <= n; i++) {
            if (ar[p][i] == 0 || dist[i] != 0) {
                continue;
            }
            dist[i] = dist[p] + 1;
            q.push(i);
        }
    }
    if (dist[b] == 0) {
        cout << -1;
    } else {
        cout << dist[b];
    }
    return 0;
}