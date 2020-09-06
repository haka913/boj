// 2573 빙산
// https://www.acmicpc.net/problem/2573
#include <bits/stdc++.h>

using namespace std;
int ar[301][301];
bool check[301][301];
int n, m;
int result = 0;
// up down left right
int dy[] = {-1, 1, 0, 0};
int dx[] = {0, 0, -1, 1};

void melt() {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (ar[i][j] > 0) {
                for (int k = 0; k < 4; k++) {
                    int ny = i + dy[k];
                    int nx = j + dx[k];
                    if (ar[i][j] > 0 && ar[ny][nx] == -1) {
                        ar[i][j]--;
                    }
                }
            }
        }
    }

    // 녹은거 바다로 취급
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (ar[i][j] == 0) {
                ar[i][j] = -1;
            }
        }
    }
}

void dfs(int y, int x) {
    if (check[y][x]) {
        check[y][x] = false;
        for (int i = 0; i < 4; i++) {
            int ny = y + dy[i];
            int nx = x + dx[i];
            if (ny < 0 || nx < 0 || ny >= n || nx >= m) continue;
            dfs(ny, nx);
        }
    }
}

int cntIce() {
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (ar[i][j] > 0) {
                check[i][j] = true;
            } else {
                check[i][j] = false;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            // ice -> check
            if (check[i][j]) {
                cnt++;
                dfs(i, j);
            }
        }
    }

    return cnt;
}

int main() {
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> ar[i][j];
            // 바다 구분
            if (ar[i][j] == 0) {
                ar[i][j] = -1;
            }
        }
    }
    int currentIceberg = 0;
    while (true) {
        currentIceberg = cntIce();
        if (currentIceberg == 1) {
            melt();
            result++;
        } else {
            break;
        }
    }
    if (currentIceberg > 1)
        cout << result;
    else
        cout << 0;
    return 0;
}