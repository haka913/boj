// 2526 싸이클
// https://www.acmicpc.net/problem/2526
#include <algorithm>
#include <iostream>
#include <set>
using namespace std;
int ar[100];
int main() {
    int n, p;
    cin >> n >> p;
    set<int> s;
    int cnt = 0;
    int ret = n;
    while (true) {
        ret = (ret * n) % p;
        if (ar[ret] == 2) break;
        ar[ret]++;
    }
    for (int i = 0; i < p; i++) {
        if (ar[i] == 2) {
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}