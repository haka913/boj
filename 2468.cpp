/*
 * 2468.cpp
 *
 *  Created on: 2019. 3. 28.
 *      Author: paul
 */
#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
int ar[101][101];
int check[101][101];
// 오른쪽 아래 왼쪽 위
int dx[] = { 0, 1, 0, -1 };
int dy[] = { 1, 0, -1, 0 };
int n;
int maxH;
void dfs(int x, int y) {
	check[x][y] = 1;
	for (int i = 0; i < 4; i++) {
		int nx = x + dx[i];
		int ny = y + dy[i];
		if (0 <= nx && 0 <= ny && nx < n && ny < n && ar[nx][ny] > maxH && check[nx][ny] == 0) {
			dfs(nx, ny);
		}
	}
}

int main() {
	int result = 0;
	cin >> n;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> ar[i][j];
			maxH = max(maxH, ar[i][j]);
		}
	}
//	for(int i = 0 ; i< n;i++){
//		for(int j = 0 ; j < n;j++){
//			cout << ar[i][j];
//		}
//		cout << endl;
//	}
	while(maxH--){
		int tmp =0;
		for(int i = 0 ; i <n;i++){
			for(int j = 0 ; j<n;j++){
				if(ar[i][j]>maxH && check[i][j]==0){
					dfs(i,j);
					tmp++;
				}
			}
		}
		result = max(result, tmp);
		memset(check,0,sizeof(check));
	}
	cout << result;
//	cout << maxH;

	return 0;
}

