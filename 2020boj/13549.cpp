// 13549 숨바꼭질3
// https://www.acmicpc.net/problem/13549
#include <bits/stdc++.h>

#include <algorithm>
#include <iostream>
#include <queue>
#include <utility>

using namespace std;

int n, k;
int ar[100001];
int cnt = 0;
void bfs() {
    deque<int> q;
    q.push_front(n);
    ar[n] = 0;
    while (!q.empty()) {
        int point = q.front();
        q.pop_front();
        if (point == k) {
            cout << ar[point];
            break;
        }

        if (2 * point >= 0 && 2 * point < 100001 && ar[2 * point] == -1) {
            q.push_front(2 * point);
            ar[2 * point] = ar[point];
        }
        if (point + 1 >= 0 && point + 1 < 100001 && ar[point + 1] == -1) {
            q.push_back(point + 1);
            ar[point + 1] = ar[point] + 1;
        }
        if (point - 1 >= 0 && point - 1 < 100001 && ar[point - 1] == -1) {
            q.push_back(point - 1);
            ar[point - 1] = ar[point] + 1;
        }
    }
}
int main() {
    cin >> n >> k;
    memset(ar, -1, sizeof(ar));
    bfs();
    return 0;
}
