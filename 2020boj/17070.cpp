// 17070 파이프 옮기기1
// https://www.acmicpc.net/problem/17070
// 빈 칸은 0, 벽은 1로 주어진다. (1, 1)과 (1, 2)는 항상 빈 칸이다.
// 파이프는 (1, 1)와 (1, 2)를 차지하고 있고, 방향은 가로
// 파이프의 한쪽 끝을 (N, N)으로 이동시키는 방법의 수

//right-> right, rightdown
//down -> down, rightdown
// rightdown -> rightdown, right, down
#include <bits/stdc++.h>

using namespace std;
int n;
int ar[17][17];
// right, right-down, down
int dy[]={0,1,1};
int dx[]={1,1,0};
int cnt =0;
void pipe(int y,int x, int dir){
    if(y == n-1 && x==n-1){
        cnt +=1;
        return;
    }
    for(int i = 0 ; i<3;i++){
        if(i!=1 && i+dir==2) continue;
        int ny = y+dy[i];
        int nx = x+dx[i];
        if(ny>=n||nx>=n|| ar[ny][nx]) continue;
        if(i==1 && (ar[y][x+1] || ar[y+1][x])) continue;
        pipe(ny,nx,i);
    }

}

int main(){
    cin >> n;
    for(int i = 0 ; i<n;i++){
        for(int j = 0 ;j<n;j++){
            cin >> ar[i][j];
        }
    }
    pipe(0,1,0);
    cout << cnt;
    return 0;
}