/*
 * 7576.cpp
 *
 *  Created on: 2019. 3. 6.
 *      Author: paul
 */
#include <iostream>
#include <algorithm>
#include <queue>
#include <utility>

using namespace std;
int n, m;
int ar[1001][1001];
int dx[4] = { -1, 1, 0, 0 };
int dy[4] = { 0, 0, 1, -1 };
queue<pair<int, int>> q;
//정수 1은 익은 토마토
//정수 0은 익지 않은 토마토
//정수 -1은 토마토가 들어있지 않은 칸
int main() {
	bool isFull = true;
	bool isRipen = false;
	int mx = -1e9;
	cin >> m >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> ar[i][j];
			if (ar[i][j] == 1) {
				q.push(make_pair(i,j));
				isRipen = true;
			}
			else if(ar[i][j]==0){
				isFull=false;
			}
		}
	}

	if (!isRipen) {
		cout << "-1";
		return 0;
	} else if (isFull) {
		cout << "0";
		return 0;
	} else {
		//bfs
		while (!q.empty()) {

			pair<int, int> p = q.front();
			q.pop();
			int x = p.second;
			int y = p.first;
			for (int i = 0; i < 4; i++) {
				int nx = x + dx[i];
				int ny = y + dy[i];
				if (ny < 0 || ny >= n || nx < 0 || nx >= m)
					continue;
				if (ar[ny][nx] == 0) {
					ar[ny][nx] = ar[y][x]+1;
					q.push(make_pair(ny, nx));
				}
			}
		}

		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				if (ar[i][j] == 0) {
					isRipen = false;
					cout << "-1";
					return 0;
				}
				mx = max(mx,ar[i][j]);
			}
		}

	}
	cout << mx-1;
	return 0;
}

