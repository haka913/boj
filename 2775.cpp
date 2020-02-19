/*
 * 2775.cpp
 *
 *  Created on: 2019. 2. 8.
 *      Author: paulk
 */
#include <iostream>

using namespace std;

int dp[15][15];

int main() {
	int t;
	cin >> t;
	int k, n;
	for (int i = 1; i < 15; i++) {
		dp[0][i] = i;
	}
	for (int i = 1; i < 15; i++) {
		for (int j = 1; j < 15; j++) {
			//dp[i][j]는 a-1층의 b호 까지의 사람의 수가 더해진 수
			dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
			//dp[i][j-1]은 a-1층의 b-1호까지의 사람의 수가 더해진 수
			//dp[i-1][j]은 a-1층의 b호 사람의 수
		}
	}
	while (t--) {
		cin >> k >> n;
		cout << dp[k][n]<<"\n";
	}
	return 0;
}

