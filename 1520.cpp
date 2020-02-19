/*
 * 1520.cpp
 *
 *  Created on: 2019. 2. 17.
 *      Author: paul
 */
#include <iostream>
#include <cstring>
using namespace std;

int maze[501][501];
int dp[501][501];
// 오른쪽 아래 왼쪽 위
int dx[]={0,1,0,-1};
int dy[]={1,0,-1,0};
int M, N;

int dfs(int x,int y){
	if(x==N && y==M) return 1;

	int& ret = dp[x][y];
	if(ret!=-1) return ret;
	ret = 0;
	for(int i = 0 ; i<4;i++){
		int nx = x+dx[i];
		int ny = y+dy[i];
		if(1<=nx && nx<=N && 1<=ny && ny<=M && maze[nx][ny]<maze[x][y]){
			ret+=dfs(nx,ny);
		}
	}
	return ret;
}

int main() {
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	cin >> N >> M;
	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= M; j++) {
			cin >> maze[i][j];
//			dp[i][j]=-1;
		}
	}
	memset(dp,-1,sizeof(dp));
	cout << dfs(1,1);

//	for (int i = 1; i <= N; i++) {
//		for (int j = 1; j <= M; j++) {
//			cout << maze[i][j] << " ";
//		}
//		cout << endl;
//	}

	return 0;
}

