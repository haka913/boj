/*
 * 11057.cpp
 *
 *  Created on: 2019. 2. 12.
 *      Author: paul
 */
#include <iostream>
#include <algorithm>

using namespace std;
const int MOD = 10007;
int dp[1001][10];
//dp[i][j]에서 i자리수에서 1의자리가 j인 오르막 수의 갯수
//dp[i][j]=d[i-1][k] for k=0 to j
int main() {
	int n;
	cin >> n;
	for (int i = 0; i <10; i++) {
		dp[1][i] = 1;
	}


	for (int i = 2; i <= n; i++) {
		for (int j = 0; j < 10; j++) {
			for (int k = 0; k <= j; k++) {
				dp[i][j] = (dp[i][j] + dp[i-1][k]) % MOD;
			}
		}
	}
	int result = 0;
	for (int i = 0; i <10; i++) {
		result = (result + dp[n][i]) % MOD;
	}
	cout << result;
	return 0;
}

