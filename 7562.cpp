/*
 * 7562.cpp
 *
 *  Created on: 2019. 2. 12.
 *      Author: paul
 */
#include <iostream>
#include <algorithm>
#include <queue>
#include <utility>

using namespace std;

queue<pair<int,int>> q;
int dx[]={ 1, 2, 2, 1,-1,-2,-2,-1};
int dy[]={-2,-1, 1, 2, 2, 1,-1,-2};

int n;
int x,y,a,b;

int main(){
	int t;
	cin >> t;
	while(t--){
		int board[301][301]={0};
		cin >> n >>x>>y>>a>>b;
		q.push(make_pair(x,y));
		board[x][y]=1;
		while(!q.empty()){

			for(int i = 0 ; i <8;i++){
				int tx = q.front().first +dx[i];
				int ty = q.front().second + dy[i];
				if(tx>=0 && tx<n && ty >=0 && ty<n && !board[tx][ty]){
					board[tx][ty]= board[q.front().first][q.front().second]+1;
					q.push(make_pair(tx,ty));
				}
			}
			q.pop();
		}
		cout << board[a][b]-1<<"\n";
	}

	return 0;
}



