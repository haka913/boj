// 3187 양치기 꿍
// https://www.acmicpc.net/problem/3187

#include <algorithm>
#include <iostream>
#include <queue>
#include <utility>

using namespace std;

// up down left right
int dy[] = {-1, 1, 0, 0};
int dx[] = {0, 0, -1, 1};

char map[252][252];
int r, c;
int totalSheep = 0;
int totalWolf = 0;

void bfs(int r_idx, int c_idx, int wolf, int sheep) {
    queue<pair<int, int>> q;
    q.push({r_idx, c_idx});

    while (!q.empty()) {
        int y = q.front().first;
        int x = q.front().second;
        q.pop();
        for (int i = 0; i < 4; i++) {
            int ny = y + dy[i];
            int nx = x + dx[i];

            if (ny >= 1 && ny <= r && nx >= 1 && nx <= c) {
                if (map[ny][nx] == 'v') {
                    wolf++;
                    map[ny][nx] = '#';
                    q.push({ny, nx});
                } else if (map[ny][nx] == 'k') {
                    sheep++;
                    map[ny][nx] = '#';
                    q.push({ny, nx});
                } else if (map[ny][nx] == '.') {
                    map[ny][nx] = '#';
                    q.push({ny, nx});
                }
            }
        }
    }
    if (wolf < sheep) {
        totalSheep += sheep;
    } else {
        totalWolf += wolf;
    }
}

int main() {
    cin >> r >> c;
    for (int i = 1; i <= r; i++) {
        for (int j = 1; j <= c; j++) {
            cin >> map[i][j];
        }
    }

    for (int i = 1; i <= r; i++) {
        for (int j = 1; j <= c; j++) {
            if (map[i][j] == 'v') {  // wolf
                map[i][j] = '#';
                bfs(i, j, 1, 0);
            } else if (map[i][j] == 'k') {  // sheep
                map[i][j] = '#';
                bfs(i, j, 0, 1);
            } else if (map[i][j] == '.') {
                map[i][j] = '#';
                bfs(i, j, 0, 0);
            }
        }
    }

    cout << totalSheep << " " << totalWolf;
    return 0;
}
