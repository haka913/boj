/*
 * 1890.cpp
 *
 *  Created on: 2019. 2. 17.
 *      Author: paul
 */
#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;

int maze[101][101];
long long dp[101][101];
int n;
// 오른쪽 아래 왼쪽 위
int dx[]={0,1};
int dy[]={1,0};

long long dfs(int x,int y){
	if(x==n && y==n) return 1;

	long long& ret = dp[x][y];
	if(ret!=-1) return ret;

	ret= 0;
	for(int i = 0 ; i <2;i++){
		int nx = x+dx[i]*maze[x][y];
		int ny = y+dy[i]*maze[x][y];

		dp[x][y]+=dfs(nx,ny);
	}

	return ret;
}

int main(){
	cin >> n;
	for(int i = 1;i<=n;i++){
		for(int j = 1;j<=n;j++){
			cin >> maze[i][j];
		}
	}

	memset(dp,-1,sizeof(dp));
	cout << dfs(1,1);
	return 0;
}


