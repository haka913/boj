// 14889 스타트와 링크
// https://www.acmicpc.net/problem/14889
#include <bits/stdc++.h>

using namespace std;
int ar[21][21];
// true t1, false t2
bool check[21];
int n;
int result = 1e6;

void dfs(int cnt, int idx){
    if(idx == n ) return;
    if(cnt == n/2){
        int t1=0;
        int t2=0;
        for(int i= 0;i<n;i++){
            for(int j = 0 ; j <n;j++){
                if(check[i]&& check[j]){
                    t1+=ar[i][j];
                }
                if(!check[i]&& !check[j]){
                    t2 += ar[i][j];
                }
            }
        }
        result = min(result, abs(t1-t2));
    }
    check[idx] = true;
    dfs(cnt+1, idx+1);
    check[idx] = false;
    dfs(cnt, idx+1);
}

int main(){
    cin >> n;
    for(int i = 0 ; i <n;i++){
        for(int j = 0 ; j <n;j++){
            cin >> ar[i][j];
        }
    }
    dfs(0,0);
    cout << result;

    return 0;
}