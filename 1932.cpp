/*
 * 1932.cpp
 *
 *  Created on: 2018. 11. 5.
 *      Author: paul
 */
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int N;
	int tri[501][501] = { 0 };
	cin >> N;

	for (int i = 1; i <= N; i++) {
		for (int j = 1; j < i + 1; j++) {
			cin >> tri[i][j];
		}
	}

	for (int i = N; i >=1; i--) {
		for (int j = 1; j <= i; j++) {
			tri[i-1][j] += max(tri[i][j],tri[i][j+1]);
		}
	}

	cout << tri[1][1];
	return 0;
}

