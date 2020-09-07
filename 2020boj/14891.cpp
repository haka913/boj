// 14891 톱니바퀴
// https://www.acmicpc.net/problem/14891
#include <bits/stdc++.h>

using namespace std;
// 0 N  1 S
int wheel[4][8];
int k;

// 12 - index[0] ->clockwise
// 1번 톱니바퀴의 12시방향이 N극이면 0점, S극이면 1점
// 2번 톱니바퀴의 12시방향이 N극이면 0점, S극이면 2점
// 3번 톱니바퀴의 12시방향이 N극이면 0점, S극이면 4점
// 4번 톱니바퀴의 12시방향이 N극이면 0점, S극이면 8점
int num, dir;

void rotateWheel(int n, int d) {
    int tmp[8];
    if (d == 1) {
        for (int i = 0; i < 8; i++) {
            tmp[(i + 1) % 8] = wheel[n][i];
        }
    } else {
        for (int i = 0; i < 8; i++) {
            tmp[i] = wheel[n][(i + 1) % 8];
        }
    }

    for (int i = 0; i < 8; i++) {
        wheel[n][i] = tmp[i];
    }
}
int sumScore() {
    int sum = 0;
    for (int i = 0; i < 4; i++) {
        if (wheel[i][0]) {
            sum += (1 << i);
        }
    }
    return sum;
}
int main() {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 8; j++) {
            scanf("%1d", &wheel[i][j]);
        }
    }
    cin >> k;
    for (int i = 0; i < k; i++) {
        cin >> num >> dir;
        // num-1, dir-> 1 clockwise  -1 counterclockwise
        num -= 1;
        int direct[4] = {0};
        direct[num] = dir;
        for (int i = num; i < 3; i++) {
            if (wheel[i][2] != wheel[i + 1][6]) {
                direct[i + 1] = -direct[i];
            }
        }
        for (int i = num; i > 0; i--) {
            if (wheel[i][6] != wheel[i - 1][2]) {
                direct[i - 1] = -direct[i];
            }
        }
        for (int i = 0; i < 4; i++) {
            if (direct[i]) {
                rotateWheel(i, direct[i]);
            }
        }
    }
    int result = sumScore();
    cout << result;

    return 0;
}