// 1912 연속합
// https://www.acmicpc.net/problem/1912

#include <iostream>
#include <algorithm>

using namespace std;
int ar[100001];
int sum = -1000;
int best =-1000;
int main(){
    int n;
    cin >> n;
    for(int i = 0 ; i < n;i++){
        cin >> ar[i];
        sum = max(ar[i], sum+ar[i]);
        best = max(sum, best);
    }
    cout << best;
    return 0;
}