// 12851 숨바꼭질 2
// https://www.acmicpc.net/problem/12851
#include <bits/stdc++.h>

using namespace std;
int n, k;
int dist[100001];

int result = 999999;
int cnt = 0;
void bfs() {
    queue<int> q;
    q.push(n);
    dist[n] = 0;
    while (!q.empty()) {
        int point = q.front();
        q.pop();
        if (point == k) {
            if (result >= dist[point]) {
                result = dist[point];
                cnt++;
            } else {
                break;
            }
        }
        if (point - 1 >= 0) {
            if (dist[point - 1] == -1 || dist[point - 1] == dist[point] + 1) {
                dist[point - 1] = dist[point] + 1;
                q.push(point - 1);
            }
        }
        if (point + 1 <= 100000) {
            if (dist[point + 1] == -1 || dist[point + 1] == dist[point] + 1) {
                dist[point + 1] = dist[point] + 1;
                q.push(point + 1);
            }
        }
        if (point * 2 <= 100000) {
            if (dist[point * 2] == -1 || dist[point * 2] == dist[point] + 1) {
                dist[point * 2] = dist[point] + 1;
                q.push(point * 2);
            }
        }
    }
    cout << result << endl << cnt;
}

int main() {
    cin >> n >> k;
    memset(dist, -1, sizeof(dist));
    bfs();
    return 0;
}