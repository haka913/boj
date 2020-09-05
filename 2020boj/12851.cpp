// 12851 숨바꼭질 2
// https://www.acmicpc.net/problem/12851
#include <bits/stdc++.h>

using namespace std;
int n, k;
int dist[100001];

// void bfs(int n) {
//     queue<int> q;
//     q.push(n);
//     int result = 0;
//     int cnt = 0;
//     while (!cnt) {
//         int size = q.size();
//         while (size--) {
//             int p = q.front();
//             q.pop();
//             if (p == k) cnt += 1;
//             int ar[] = {p - 1, p + 1, 2 * p};
//             for (int i = 0; i < 3; i++) {
//                 if (ar[i] < 0 || ar[i] > 100000) continue;
//                 if (dist[ar[i]] && dist[ar[i]] != dist[p] + 1) continue;
//                 q.push(ar[i]);
//                 dist[ar[i]] = dist[p] + 1;
//             }
//         }
//         result += 1;
//     }
//     cout << result - 1 << endl << cnt;
// }
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