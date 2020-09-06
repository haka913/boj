// 3190 뱀
// https://www.acmicpc.net/problem/3190
#include <bits/stdc++.h>

using namespace std;

int n, k, L;
// 1 apple 2 snake
int ar[101][101];

// right down left up
int dy[] = {0, 1, 0, -1};
int dx[] = {1, 0, -1, 0};
vector<pair<int, char>> v;
int cnt = 0;
int y = 0, x = 0, d = 0;
int idx = 0;
void moveSnake() {
    // start point snake
    ar[0][0] = 2;
    // snake
    queue<pair<int, int>> q;
    q.push({0, 0});
    while (true) {
        y += dy[d];
        x += dx[d];
        cnt++;
        if (y < 0 || x < 0 || y >= n || x >= n || ar[y][x] == 2) {
            cout << cnt;
            return;
        }
        if (ar[y][x] == 0) {
            int ny = q.front().first;
            int nx = q.front().second;
            q.pop();
            ar[ny][nx] = 0;
        }
        ar[y][x] = 2;
        q.push({y, x});
        if (cnt == v[idx].first) {
            if (v[idx].second == 'L') {
                d = (d + 3) % 4;
            } else {
                d = (d + 1) % 4;
            }
            idx++;
        }
    }
}
int main() {
    cin >> n >> k;
    for (int i = 0; i < k; i++) {
        int y, x;
        cin >> y >> x;
        // apple
        ar[y - 1][x - 1] = 1;
    }
    cin >> L;

    for (int i = 0; i < L; i++) {
        int x;
        char c;
        // 'L' dir -1  ((dir-1)+4)%4
        // 'D' dir +1  ((dir+1))%4
        cin >> x >> c;
        v.push_back({x, c});
    }
    moveSnake();
    return 0;
}