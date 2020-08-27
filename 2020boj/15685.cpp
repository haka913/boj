// 15685 드래곤 커브
// https://www.acmicpc.net/problem/15685
// x와 y는 드래곤 커브의 시작 점, d는 시작 방향, g는 세대이다.
// (0 ≤ x, y ≤ 100, 0 ≤ d ≤ 3, 0 ≤ g ≤ 10)
// 0: x좌표가 증가하는 방향 (→)
// 1: y좌표가 감소하는 방향 (↑)
// 2: x좌표가 감소하는 방향 (←)
// 3: y좌표가 증가하는 방향 (↓)
#include <bits/stdc++.h>

using namespace std;
int n;
int result;
int ar[101][101];
// 0 right 1 up 2 left 3 down
int dy[] = {0, -1, 0, 1};
int dx[] = {1, 0, -1, 0};
vector<int> v;

// 0 |
// 0 | 1
// 0 1 | 2 1
// 0 1 2 1 | 2 3 2 1
void dragon() {
    v.push_back(0);
    for (int i = 0; i <= 10; i++) {
        for (int j = v.size() - 1; j >= 0; j--) {
            v.push_back((v[j] + 1) % 4);
        }
    }
}

void draw(int x, int y, int dir, int gen) {
    ar[y][x] = 1;
    gen = 1 << gen;
    for (int i = 0; i < gen; i++) {
        y = y + dy[(v[i] + dir) % 4];
        x = x + dx[(v[i] + dir) % 4];
        ar[y][x] = 1;
    }
}

int cnt() {
    int tmp = 0;
    for (int i = 0; i < 100; i++) {
        for (int j = 0; j < 100; j++) {
            if (ar[i][j] && ar[i + 1][j] && ar[i][j + 1] && ar[i + 1][j + 1]) {
                tmp++;
            }
        }
    }
    return tmp;
}

int main() {
    dragon();
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x, y, d, g;
        cin >> x >> y >> d >> g;
        draw(x, y, d, g);
    }
    result = cnt();
    cout << result;
    return 0;
}