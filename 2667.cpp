/*
 * 2667.cpp
 *
 *  Created on: 2019. 2. 8.
 *      Author: paulk
 */
#include <iostream>
#include <algorithm>
#include <cstdio>

using namespace std;

int ground[31][31];
int holesize[30];
int t = 1;
int dx[4] = { 0, 1, 0, -1 };
int dy[4] = { -1, 0, 1, 0 };
//내림차순
bool cmp(int a, int b) {
	return a > b;
}

void dfs(int y, int x) {
	if (ground[y][x] == 0)
		return;
	holesize[t]++;
	ground[y][x] = 0;

	for (int i = 0; i < 4; i++) {
		dfs(y + dy[i], x + dx[i]);
	}
	return;
}

int main() {
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			scanf("%1d",&ground[i][j]);
//			cin >> ground[i][j];
		}
	}

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			if (ground[i][j] == 1) {
				dfs(i, j);
				t++;
			}
		}
	}

	cout << t-1<<"\n";
	sort(holesize+1,holesize+t);
	for(int i =1;i<t;i++){
		cout << holesize[i]<<"\n";
	}


	return 0;
}



