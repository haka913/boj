/*
 * 2606.cpp
 *
 *  Created on: 2019. 2. 7.
 *      Author: paul
 */
#include <iostream>
#include <algorithm>
//bfs도 해보기
using namespace std;
int n,m;
int com[101][101];
bool visited[101];
int cnt;
void dfs(int x){
	visited[x]=true;

	for(int i = 1 ; i <= n;i++){
		if(!visited[i] && com[x][i]==1){
			cnt++;
			dfs(i);
		}
	}
}

void print(){
	for(int i = 0;i<n;i++){
		for(int j = 0 ; j <n;j++){
			cout << com[i][j] <<" ";
		}
		cout << endl;
	}
}

int main(){

	cin >>n>>m;
	int a,b;
	for(int i = 0 ; i < m;i++){
		cin >>a>>b;
		com[a][b]=com[b][a]=1;
	}
	cnt=0;
	dfs(1);
	cout << cnt;
	return 0;
}



