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
			//dp[i][j]�� a-1���� bȣ ������ ����� ���� ������ ��
			dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
			//dp[i][j-1]�� a-1���� b-1ȣ������ ����� ���� ������ ��
			//dp[i-1][j]�� a-1���� bȣ ����� ��
		}
	}
	while (t--) {
		cin >> k >> n;
		cout << dp[k][n]<<"\n";
	}
	return 0;
}

