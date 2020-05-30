// 15970 화살표 그리기
// https://www.acmicpc.net/problem/15970
#include <algorithm>
#include <iostream>
#include <map>
#include <vector>

using namespace std;
int main() {
    int n, x, y;  // x-idx y-color
    cin >> n;
    // color, idx
    int result = 0;
    map<int, vector<int>> m;
    for (int i = 0; i < n; i++) {
        cin >> x >> y;
        m[y].push_back(x);
    }
    for (auto ball : m) {
        vector<int> v = ball.second;
        sort(v.begin(), v.end());
        result += (v[1] - v[0]);
        for (int i = 1; i < v.size() - 1; i++) {
            result += min(v[i + 1] - v[i], v[i] - v[i - 1]);
        }
        result += v[v.size() - 1] - v[v.size() - 2];
    }
    cout << result;

    return 0;
}