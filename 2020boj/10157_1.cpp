// 10157 자리배정
// https://www.acmicpc.net/problem/10157
#include <algorithm>
#include <iostream>

using namespace std;
int map[1001][1001];

int main() {
    // down right up left
    int dy[] = {1, 0, -1, 0};
    int dx[] = {0, 1, 0, -1};
    int c, r, k;
    cin >> c >> r >> k;
    int cnt = 1;
    int dir = 0;
    int y = 0;
    int x = 0;
    if (k > c * r) {
        cout << 0;
        return 0;
    }

    while (cnt != k) {
        map[y][x] = cnt;
        int ny = y + dy[dir];
        int nx = x + dx[dir];

        if (nx < 0 || ny < 0 || nx >= c || ny >= r || map[ny][nx] != 0) {
            dir = (dir + 1) % 4;
            ny = y + dy[dir];
            nx = x + dx[dir];
        }
        y = ny;
        x = nx;
        cnt++;
    }

    cout << x + 1 << " " << y + 1 << endl;

    return 0;
}