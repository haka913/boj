// 10799 쇠막대기
// https://www.acmicpc.net/problem/10799

#include <algorithm>
#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {
    string s;
    stack<char> st;
    int result = 0;

    cin >> s;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '(') {
            st.push(s[i]);
        } else {
            st.pop();
            if (s[i - 1] == '(') {
                result += st.size();
            } else {
                result += 1;
            }
        }
    }

    cout << result;

    return 0;
}