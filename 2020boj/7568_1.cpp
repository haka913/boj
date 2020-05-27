// 7568 덩치
// https://www.acmicpc.net/problem/7568

#include <algorithm>
#include <iostream>
#include <utility>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<pair<int, int> > v;
    int x, y;
    for (int i = 0; i < n; i++) {
        cin >> x >> y;
        v.push_back(pair<int, int>(x, y));
    }
    cout << "pair is\n";
    for (auto i : v) {
        cout << i.first << " " << i.second << "\n";
    }

    for (int i = 0; i < v.size(); i++) {
        int rank = 1;
        for (int j = 0; j < v.size(); j++) {
            if (v[i].first < v[j].first && v[i].second < v[j].second) {
                rank++;
            }
        }
        cout << rank << " ";
    }

    return 0;
}