/*
 * 2178.cpp
 *
 *  Created on: 2019. 2. 17.
 *      Author: paul
 */
#include <iostream>
#include <queue>
#include <algorithm>
#include <utility>
#include <cstdio>

using namespace std;
int n, m;
int dx[4] = { -1, 1, 0, 0 };
int dy[4] = { 0, 0, 1, -1 };
int map[101][101];
bool visit[101][101];
queue<pair<int, int>> q;
void bfs() {
	visit[0][0] = true;

	while (!q.empty()) {
		pair<int, int> p;
		p = q.front();
		int x = p.first, y = p.second;
		q.pop();
		for (int i = 0; i < 4; i++) {
			int nx = x + dx[i];
			int ny = y + dy[i];

			if (nx >= 0 && nx < n && ny >= 0 && ny < m && visit[nx][ny] == false
					&& map[nx][ny] >= 1) {
//				if (nx == (n - 1) && ny == (m - 1)) {
//					break;
//				}

				map[nx][ny] = map[x][y] + 1;
				visit[nx][ny] = true;
				q.push(make_pair(nx, ny));
			}

		}
	}
}

int main() {
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			scanf("%1d", &map[i][j]);
		}
	}
	q.push(make_pair(0, 0));
	bfs();
	cout << map[n - 1][m - 1];
	return 0;
}

