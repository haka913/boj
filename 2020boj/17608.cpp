// 17608 막대기
// https://www.acmicpc.net/problem/17608
#include <algorithm>
#include <iostream>
#include <stack>
using namespace std;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    stack<int> st;
    int temp;
    int curMax = 0;
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        cin >> temp;
        st.push(temp);
    }
    while (!st.empty()) {
        if (st.top() > curMax) {
            curMax = st.top();
            cnt++;
        }
        st.pop();
    }
    cout << cnt;
    return 0;
}