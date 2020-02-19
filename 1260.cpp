/*
 * 1260.cpp
 *
 *  Created on: 2019. 2. 6.
 *      Author: paulk
 */
#include <iostream>
#include <algorithm>
#include <queue>
#include <stack>
using namespace std;

int visit[1001];
int arr[1001][1001];
int n,m,v;
void dfs(int cur){
	cout << cur<<" ";
	visit[cur]=1;
	for(int i = 1;i<=n;i++){
		if(arr[cur][i] and !visit[i]){
			dfs(i);
		}
	}

}

void bfs(int src){
	queue<int> q;
	q.push(src);
	visit[src]=2;
	while(!q.empty()){
		int cur = q.front();
		cout << cur <<" ";
		q.pop();
		for(int i = 1;i<=n;i++){
			if(arr[cur][i] and visit[i]!=2){
				visit[i]=2;
				q.push(i);
			}
		}
	}


}


int main(){
	cin >> n>>m>>v;
	for(int i = 0; i<m;i++){
		int x,y;
		cin >>x>>y;
		arr[x][y]=arr[y][x]=1;
	}
	dfs(v);
	cout << endl;
	bfs(v);
	return 0;
}



