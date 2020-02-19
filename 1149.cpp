/*
 * 1149.cpp
 *
 *  Created on: 2019. 2. 8.
 *      Author: paulk
 */
#include <iostream>
#include <algorithm>
using namespace std;

//void print() {
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < 3; j++) {
//			cout << neig[i][j] << " ";
//		}
//		cout << "\n";
//	}
//}
int main() {
	int n;
	int neig[1001][3];
	int dp[1001][3];
	cin >> n;

	for (int i = 0; i < n; i++) {
		for (int j = 0;j < 3; j++) {
			cin >> neig[i][j];
		}
	}
//	print();

	for (int i = 0; i < 3; i++) {
		dp[0][i] = neig[0][i];
	}

	for (int i = 1; i < n; i++) {
		dp[i][0] = min(dp[i - 1][1], dp[i - 1][2]);
		dp[i][0] += neig[i][0];
		dp[i][1] = min(dp[i - 1][0], dp[i - 1][2]);
		dp[i][1] += neig[i][1];
		dp[i][2] = min(dp[i - 1][1], dp[i - 1][0]);
		dp[i][2] += neig[i][2];

	}

	int minPaint = min(min(dp[n - 1][0], dp[n - 1][1]), dp[n - 1][2]);
	cout << minPaint;

	return 0;
}

