// 7568 덩치
// https://www.acmicpc.net/problem/7568

#include <algorithm>
#include <iostream>

using namespace std;
int people[51][2];
int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> people[i][0] >> people[i][1];
    }
    for (int i = 0; i < n; i++) {
        int rank = 1;
        for (int j = 0; j < n; j++) {
            if (people[i][0] < people[j][0] && people[i][1] < people[j][1]) {
                rank++;
            }
        }
        cout << rank << " ";
    }
    return 0;
}