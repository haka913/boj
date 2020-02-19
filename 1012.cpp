/*
 * 1012.cpp
 *
 *  Created on: 2019. 2. 7.
 *      Author: paul
 */
#include <iostream>
#include <cstring>

using namespace std;

//bfs도 해볼것
// up down left right
int dx[4] = { -1, 1, 0, 0 };
int dy[4] = { 0, 0, -1, 1 };
int m, n, k;
int x, y;
int farm[51][51];
bool isVisit[51][51];

void dfs(int x, int y) {
	for (int i = 0; i < 4; i++) {
		int nx = x + dx[i], ny = y + dy[i];
		if (nx >= 0 && nx < m && ny >= 0 && ny < n && !isVisit[nx][ny]
				&& farm[nx][ny]) {
			isVisit[nx][ny] = true;
			dfs(nx, ny);
		}
	}

}

//void print(int m,int n){
//	for(int i = 0 ; i <m;i++){
//		for(int j = 0 ; j <n;j++){
//			cout << farm[i][j] <<" ";
//		}
//		cout << endl;
//	}
//}

int main() {
	int t;
	cin >> t;


	while (t--) {
		int result =0;
		memset(farm, 0, sizeof(farm));
		memset(isVisit, 0, sizeof(isVisit));

		cin >> m >> n>>k;
		for (int i = 0; i < k; i++) {
			cin >> x >> y;
			farm[x][y] = 1;
		}
//		cout <<"farm is :\n";
//		print(m,n);
//		cout <<endl;
		for (int i = 0; i < m; i++) {
			for (int j = 0; j < n; j++) {
				if (!isVisit[i][j] && farm[i][j]) {
					dfs(i, j);
					result++;
				}
			}

		}
		cout << result<<"\n";

	}

	return 0;
}

//#include<cstdio>
//int erase(int x,int y,bool arr[52][52]){
//	arr[x][y] = 0;
//	if(arr[x-1][y]) erase(x-1,y,arr);
//	if(arr[x+1][y]) erase(x+1,y,arr);
//	if(arr[x][y-1]) erase(x,y-1,arr);
//	if(arr[x][y+1]) erase(x,y+1,arr);
//	return 0;
//}
//int main(){
//	int T;
//	scanf("%d",&T);
//	while(T--){
//		int m,n,k;
//		int cnt=0;
//		scanf("%d %d %d",&m,&n,&k);
//		bool arr[52][52] = {0,};
//		while(k--){
//			int x,y;
//			scanf("%d %d",&x,&y);
//			arr[x+1][y+1] = 1;
//		}
//		for(int i = 1;i<m+1;++i)
//			for(int j =1;j<n+1;++j){
//				if(arr[i][j]) {
//					erase(i,j,arr);
//					cnt++;
//				}
//			}
//		printf("%d\n",cnt);
//	}
//}
