// 10157 자리배정
// https://www.acmicpc.net/problem/10157
#include <algorithm>
#include <iostream>

using namespace std;

int main() {
    int c, r, k;
    cin >> c >> r >> k;
    if (k > c * r) {
        cout << 0;
        return 0;
    }
    k--;
    int x = 0, y = 0;
    int dir_downup = 1;     // 0 down 1 up
    int dir_leftright = 1;  // 0 left 1 right
    int biasy = 0;
    int biasx = 0;
    while (k != 0) {
        if (k / (r - 1) != 0) {
            if (dir_downup) {
                y += r - 1;
                k -= (r - 1);
                if (biasy) {
                    r--;
                }
            } else {
                y -= r - 1;
                k -= (r - 1);
                r--;
                biasy = 1;
            }
            dir_downup ^= 1;
        } else if (k / (r - 1) == 0) {
            if (dir_downup) {  // up
                y += k % (r - 1);
            } else {  // down
                y -= k % (r - 1);
            }
            k = 0;
        }

        if (k / (c - 1) != 0) {
            if (dir_leftright) {
                x += c - 1;
                k -= (c - 1);
                c--;
                biasx = 1;
            } else {
                x -= c - 1;
                k -= (c - 1);
                if (biasx) {
                    c--;
                }
            }
            dir_leftright ^= 1;
        } else {
            if (dir_leftright) {  // right
                x += k % (c - 1);
                // k -= k % (c - 1);
            } else {
                x -= k % (c - 1);
            }
            k = 0;
        }
    }

    cout << x + 1 << " " << y + 1 << endl;

    return 0;
}
