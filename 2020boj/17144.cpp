// 17144 미세먼지 안녕!
// https://www.acmicpc.net/problem/17144
// 공기청정기는 -1,항상 1번 열에 설치되어 있고, 크기는 두 행을 차지
#include <bits/stdc++.h>

using namespace std;
int ar[51][51];
int r, c, T;
// up down left right
int dy[] = {-1, 1, 0, 0};
int dx[] = {0, 0, -1, 1};
// only row, col = 0
// right up left down
int airUp;
// right down left up
int airDown;

bool upIsIn = false;
int result = 0;

void blow() {
    int copyAr[51][51] = {0};
    memcpy(copyAr, ar, sizeof(ar));
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if (ar[i][j] >= 5) {
                int d = ar[i][j] / 5;
                for (int k = 0; k < 4; k++) {
                    int ny = i + dy[k];
                    int nx = j + dx[k];
                    if (ny >= 0 && nx >= 0 && ny < r && nx < c &&
                        ar[ny][nx] != -1) {
                        copyAr[ny][nx] += d;
                        copyAr[i][j] -= d;
                    }
                }
            }
        }
    }
    memcpy(ar, copyAr, sizeof(copyAr));
}

void purify() {
    // air up
    // down left up right
    for (int i = airUp - 2; i >= 0; i--) {
        ar[i + 1][0] = ar[i][0];
    }
    for (int i = 0; i < c - 1; i++) {
        ar[0][i] = ar[0][i + 1];
    }
    for (int i = 0; i < airUp; i++) {
        ar[i][c - 1] = ar[i + 1][c - 1];
    }
    for (int i = c - 2; i >= 0; i--) {
        ar[airUp][i + 1] = ar[airUp][i];
    }
    // from airCondition
    ar[airUp][1] = 0;
    // air down
    // up left down right
    for (int i = airDown + 1; i < r - 1; i++) {
        ar[i][0] = ar[i + 1][0];
    }
    for (int i = 0; i < c - 1; i++) {
        ar[r - 1][i] = ar[r - 1][i + 1];
    }
    for (int i = r - 2; i >= airDown; i--) {
        ar[i + 1][c - 1] = ar[i][c - 1];
    }
    for (int i = c - 2; i >= 0; i--) {
        ar[airDown][i + 1] = ar[airDown][i];
    }
    // from airCondition
    ar[airDown][1] = 0;
}

int cnt() {
    int tmp = 0;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if (ar[i][j] > 0) {
                tmp += ar[i][j];
            }
        }
    }
    return tmp;
}

int main() {
    cin >> r >> c >> T;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cin >> ar[i][j];
            if (ar[i][j] == -1) {
                if (!upIsIn) {
                    airUp = i;
                    upIsIn = true;
                } else {
                    airDown = i;
                }
            }
        }
    }
    for (int i = 0; i < T; i++) {
        blow();
        purify();
    }
    result = cnt();

    cout << result << endl;
    return 0;
}