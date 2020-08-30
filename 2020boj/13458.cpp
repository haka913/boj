// 13458 시험 감독
// https://www.acmicpc.net/problem/13458
#include <bits/stdc++.h>

using namespace std;
int n;
int b,c;
int ar[1000001];
long long result;
void observe(){
    for(int i = 0 ; i <n;i++){
        ar[i] -= b;
        if(ar[i]>0){
            if(ar[i]%c==0) result += ar[i]/c;
            else result += (ar[i]/c)+1;
        }
    }
}
int main(){
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    cout.tie(NULL);
    cin >> n;
    for(int i = 0 ; i <n;i++){
        cin >>ar[i];
    }
    cin >> b>>c;
    observe();
    result += n;
    cout << result;
    return 0;
}