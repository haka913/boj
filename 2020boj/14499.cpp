// 14499 주사위 굴리기
// https://www.acmicpc.net/problem/14499
// 이동한 칸에 쓰여 있는 수가 0이면, 주사위의 바닥면에 쓰여 있는 수가 칸에 복사
// 0이 아닌 경우에는 칸에 쓰여 있는 수가 주사위의 바닥면으로 복사되며, 칸에 쓰여
// 있는 수는 0 동쪽은 1, 서쪽은 2, 북쪽은 3, 남쪽은 4
#include <bits/stdc++.h>

// 2중 for문 i,j 잘 확인하기, 런타임에러남
using namespace std;
int dy[] = {0, 0, -1, 1};
int dx[] = {1, -1, 0, 0};
int ar[21][21];
int n, m, x, y, k;
int dir;
int dice[7];
int tmp;
int main() {
    cin >> n >> m >> y >> x >> k;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> ar[i][j];
        }
    }

    for (int i = 0; i < k; i++) {
        cin >> dir;
        dir--;
        int ny = y + dy[dir];
        int nx = x + dx[dir];
        if (ny < 0 || nx < 0 || ny >= n || nx >= m) continue;
        switch (dir) {
            case 0:  // 동
                tmp = dice[1];
                dice[1] = dice[4];
                dice[4] = dice[6];
                dice[6] = dice[3];
                dice[3] = tmp;
                break;
            case 1:  // 서
                tmp = dice[1];
                dice[1] = dice[3];
                dice[3] = dice[6];
                dice[6] = dice[4];
                dice[4] = tmp;
                break;
            case 2:  // 북
                tmp = dice[1];
                dice[1] = dice[5];
                dice[5] = dice[6];
                dice[6] = dice[2];
                dice[2] = tmp;
                break;
            case 3:  //남
                tmp = dice[1];
                dice[1] = dice[2];
                dice[2] = dice[6];
                dice[6] = dice[5];
                dice[5] = tmp;
                break;
            default:
                break;
        }
        cout << dice[1] << endl;
        if (ar[ny][nx] == 0) {
            ar[ny][nx] = dice[6];
        } else {
            dice[6] = ar[ny][nx];
            ar[ny][nx] = 0;
        }

        y = ny;
        x = nx;
    }

    return 0;
}