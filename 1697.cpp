/*
 * 1697.cpp
 *
 *  Created on: 2019. 2. 6.
 *      Author: paulk
 */
#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;
int n, k;
bool visit[100001];
int main() {

	cin >> n >> k;
	if (n == k) {
		cout << 0;
	} else {
		queue<int> q;
		int depth = 0;

		q.push(n);
		visit[n] = true;
		while (!q.empty()) {
			int size = q.size();
			for (int i = 0; i < size; i++) {
				int v = q.front();
				q.pop();
				if (v == k) {
					cout << depth;
					break;
				}

				if (v - 1 >= 0 && !visit[v - 1]) {
					q.push(v - 1);
					visit[v - 1] = true;
				}
				if (v + 1 <= 100000 && !visit[v + 1]) {
					q.push(v + 1);
					visit[v + 1] = true;
				}
				if (v * 2 <= 100000 && !visit[v * 2]) {
					q.push(v * 2);
					visit[v * 2] = true;
				}
			}
			depth++;
		}
	}
	return 0;
}

