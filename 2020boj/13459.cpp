// 13459 구슬 탈출
// https://www.acmicpc.net/problem/13459
#include <bits/stdc++.h>

using namespace std;
struct beads {
    int ry, rx;
    int by, bx;
    int cnt = 0;
};
char ar[11][11];
bool check[11][11][11][11];
int n, m;
// up down left right
int dy[] = {-1, 1, 0, 0};
int dx[] = {0, 0, -1, 1};

void move(int &y, int &x, int &cnt, int dy, int dx) {
    while (ar[y + dy][x + dx] != '#' && ar[y][x] != 'O') {
        y += dy;
        x += dx;
        cnt++;
    }
}

void bfs(beads bead) {
    queue<beads> q;
    q.push(bead);
    while (!q.empty()) {
        int ry = q.front().ry;
        int rx = q.front().rx;
        int by = q.front().by;
        int bx = q.front().bx;
        int cnt = q.front().cnt;
        q.pop();
        if (cnt >= 10) {
            break;
        }
        for (int i = 0; i < 4; i++) {
            int nry = ry;
            int nrx = rx;
            int nby = by;
            int nbx = bx;
            int rc = 0, bc = 0;
            move(nry, nrx, rc, dy[i], dx[i]);
            move(nby, nbx, bc, dy[i], dx[i]);
            if (ar[nby][nbx] == 'O') continue;
            if (ar[nry][nrx] == 'O') {
                cout << "1";
                return;
            }
            if (nry == nby && nrx == nbx) {
                if (rc > bc) {
                    nry -= dy[i];
                    nrx -= dx[i];
                } else {
                    nby -= dy[i];
                    nbx -= dx[i];
                }
            }
            if (check[nry][nrx][nby][nbx]) {
                continue;
            }
            check[nry][nrx][nby][nbx] = true;
            q.push({nry, nrx, nby, nbx, cnt + 1});
        }
    }
    cout << 0;
}

int main() {
    cin >> n >> m;
    beads bead;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> ar[i][j];
            if (ar[i][j] == 'R') {
                bead.ry = i;
                bead.rx = j;
            } else if (ar[i][j] == 'B') {
                bead.by = i;
                bead.bx = j;
            }
        }
    }
    check[bead.ry][bead.rx][bead.by][bead.bx] = true;
    bfs(bead);

    return 0;
}