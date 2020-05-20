/*
 * 1904.cpp
 *
 *  Created on: 2018. 12. 4.
 *      Author: paulk
 */
#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin >> n;
	int dp[n+1];
	dp[0] = 0;
	dp[1] = 1;
	for(int i =2;i<=n+1;i++){
		dp[i] = (dp[i-2]+dp[i-1])%15746;
	}
	cout << dp[n+1];
	return 0;
}

