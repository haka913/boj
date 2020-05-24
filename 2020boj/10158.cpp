// 10158 개미
// https://www.acmicpc.net/problem/10158

#include <algorithm>
#include <iostream>

using namespace std;

int main() {
    int w, h, p, q, t;
    cin >> w >> h >> p >> q >> t;
    int nx = (p + t) % (2 * w);
    int ny = (q + t) % (2 * h);
    p = w - abs(w - nx);
    q = h - abs(h - ny);
    cout << p << " " << q;
    return 0;
}