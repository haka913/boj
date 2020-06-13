// 10834 벨트
// https://www.acmicpc.net/problem/10834
#include <algorithm>
#include <iostream>

using namespace std;
int main() {
    int m;
    cin >> m;
    int aprev = 1, bprev = 1, clockwise = 0;
    for (int i = 0; i < m; i++) {
        int a, b, clock;
        cin >> a >> b >> clock;
        clockwise ^= clock;
        aprev = a;
        if (bprev > a) {
            bprev = b * (bprev / a);
        } else if (bprev == a) {
            bprev = b;
        }
    }
    cout << clockwise << " " << bprev;
    return 0;
}