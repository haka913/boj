// 17143 낚시왕
// https://www.acmicpc.net/problem/17143

// 1.낚시왕이 오른쪽으로 한 칸 이동한다.
// 2.낚시왕이 있는 열에 있는 상어 중에서 땅과 제일 가까운 상어를 잡는다. 상어를
// 잡으면 격자판에서 잡은 상어가 사라진다. 3.상어가 이동한다.

//  (r, c)는 상어의 위치, s는 속력, d는 이동 방향, z는 크기이다.
//  d가 1인 경우는 위, 2인 경우는 아래, 3인 경우는 오른쪽, 4인 경우는 왼쪽
#include <bits/stdc++.h>

using namespace std;

struct Shark {
    // int num;
    int row;
    int col;
    int speed;
    int direct;
    int size;
    bool alive;
};

int ar[101][101];
vector<Shark> shark;
int R, C, M;
// up down right, left
int dy[] = {-1, 1, 0, 0};
int dx[] = {0, 0, 1, -1};
int result = 0;

int catchShark(int sec) {
    int Size = 0;
    for (int i = 1; i <= R; i++) {
        if (ar[i][sec] != 0) {
            Size = shark[ar[i][sec]].size;
            shark[ar[i][sec]].alive = false;
            ar[i][sec] = 0;
            break;
        }
    }
    return Size;
}

void moveShark() {
    int r, c, s, d, z;
    for (int i = 1; i <= M; i++) {
        if (shark[i].alive == false) continue;

        r = shark[i].row;
        c = shark[i].col;
        s = shark[i].speed;
        d = shark[i].direct;
        z = shark[i].size;

        if (ar[r][c] == i) {
            ar[r][c] = 0;
        }

        if (d <= 1) {
            s = s % ((R - 1) * 2);
        } else {
            s = s % ((C - 1) * 2);
        }
        // move

        for (int j = 0; j < s; j++) {
            r += dy[d];
            c += dx[d];
            if (r < 1 || c < 1 || r > R || c > C) {
                if (d == 0 || d == 2) {
                    d += 1;
                } else {
                    d -= 1;
                }
                r += dy[d];
                c += dx[d];
                j--;
            }
        }
        shark[i].row = r;
        shark[i].col = c;
        shark[i].direct = d;

        // eat shark
        if (ar[r][c] == 0) {
            ar[r][c] = i;
        } else if (ar[r][c] < i) {
            int tmp = shark[ar[r][c]].size;
            if (z > tmp) {
                shark[ar[r][c]].alive = false;
                ar[r][c] = i;
            } else {
                shark[i].alive = false;
            }
        } else {
            ar[r][c] = i;
        }
    }
}

int main() {
    cin >> R >> C >> M;
    if (M == 0) {
        cout << 0;
        return 0;
    }
    shark.push_back({0, 0, 0, 0, 0, false});
    int r, c, s, d, z;
    for (int i = 1; i <= M; i++) {
        cin >> r >> c >> s >> d >> z;
        shark.push_back({r, c, s, d - 1, z, true});
        ar[r][c] = i;
    }
    for (int i = 1; i <= C; i++) {
        result += catchShark(i);
        moveShark();
    }
    cout << result;
    return 0;
}