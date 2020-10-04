// 2003 수들의 합2
// https://www.acmicpc.net/problem/2003

// two pointer
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, m;
    cin >> n >> m;
    vector<int> v;
    int tmp;
    for (int i = 0; i < n; i++) {
        cin >> tmp;
        v.push_back(tmp);
    }
    int start = 0, end = 0;
    int sum = 0;
    int answer = 0;
    for (start = 0; start < n; start++) {
        while (sum < m && end + 1 < n) {
            sum += v[++end];
        }
        if (sum == m) answer++;
        sum -= v[start];
    }
    // int sum = v[0];
    // while (true) {
    //     if (sum >= m) {
    //         sum -= v[start];
    //         start++;
    //     } else if (end == n)
    //         break;
    //     else {
    //         sum += v[end];
    //         end++;
    //     }
    //     if (sum == m) answer++;
    // }

    cout << answer;
}