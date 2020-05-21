// 1021 회전하는 큐
// TODO: 풀기

// 첫 번째 원소를 뽑아낸다. 이 연산을 수행하면, 원래 큐의 원소가 a1, ...,
// ak이었던 것이 a2, ..., ak와 같이 된다. 왼쪽으로 한 칸 이동시킨다. 이 연산을
// 수행하면, a1, ..., ak가 a2, ..., ak, a1이 된다. 오른쪽으로 한 칸 이동시킨다.
// 이 연산을 수행하면, a1, ..., ak가 ak, a1, ..., ak-1이 된다.

#include <algorithm>
#include <deque>
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    deque<int> d;
    int n, m;
    int cnt = 0;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        d.push_back(i + 1);
    }

    int p;
    for (int i = 0; i < m; i++) {
        cin >> p;
        if (p == d.front()) {
            d.pop_front();
        } else {
            int idx = 0;
            for (auto iter : d) {
                if (iter == p) {
                    break;
                }
                idx++;
            }
            if (idx <= (d.size() / 2)) {
                while (p != d.front()) {
                    int tmp = d.front();
                    d.pop_front();
                    d.push_back(tmp);
                    cnt++;
                }
                d.pop_front();
            } else {
                while (p != d.front()) {
                    int tmp = d.back();
                    d.pop_back();
                    d.push_front(tmp);
                    cnt++;
                }
                d.pop_front();
            }
        }
    }
    cout << cnt;

    return 0;
}
