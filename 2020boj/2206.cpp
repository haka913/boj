// 2206 벽 부수고 이동하기
// https://www.acmicpc.net/problem/2206

#include <iostream>
#include <algorithm>
#include <queue>
#include <tuple>
#include <cstdio>

using namespace std;

int n,m;
int map[1002][1002];
int dist[1002][1002][2];
int cnt = 1;
// up down left right
int dy[] = {-1, 1, 0, 0};
int dx[] = {0,0,-1,1};

int bfs(int yidx,int xidx, int breakcnt){
    queue<tuple<int,int,int>> q;
    q.push({yidx,xidx,breakcnt});
    dist[1][1][0] = 1;
    while(!q.empty()){
        int y,x, brick;
        tie(y,x, brick) = q.front();
        
        q.pop();
        if(y==n && x==m) return dist[y][x][brick];
        for(int i = 0 ; i<4;i++){
            int ny = y+dy[i];
            int nx = x+dx[i];

            if(ny<1 || ny>n || nx<1 || nx>m) continue;
            if(dist[ny][nx][brick]) continue;
            if(map[ny][nx]==0){
                dist[ny][nx][brick] = dist[y][x][brick]+1;
                q.push({ny,nx,brick});

            }
            if(map[ny][nx]==1 && brick==0){
                dist[ny][nx][1] = dist[y][x][brick]+1;
                q.push({ny,nx,1});
            }
        }
    }

    return -1;

}

int main(){
    cin >> n>>m;
    for(int i = 1 ; i <=n;i++){
        for(int j= 1 ; j<=m;j++){
            scanf("%1d", &map[i][j]);
        }
    }

    cout << bfs(1,1,0);

    return 0;
}