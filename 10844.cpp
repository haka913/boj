/*
 * 10844.cpp
 *
 *  Created on: 2019. 2. 16.
 *      Author: paul
 */
#include <iostream>
#include <algorithm>
using namespace std;
const int MOD = 1000000000;
int dp[101][11];
// dp[i][j] = 총  i 자릿수이고, 가장 큰 자릿수의 숫자가 j인 경우의 수
// dp[i][j] = dp[i-1][j-1]+dp[i-1][j+1]
int main() {
	int n;
	cin >> n;
	for (int i = 1; i <=9; i++) {
		dp[1][i] = 1;
	}
	for (int i = 2; i <= n; i++) {
		for (int j = 0; j <= 9; j++) {
			dp[i][j] = (dp[i - 1][j - 1]+dp[i-1][j+1])%MOD;
		}
	}
	long long result=0;
	for(int i = 0 ; i <=9;i++){
		result+=dp[n][i];
	}
	//result 가 MOD를 초과할수 있으므로 나머지를 구해서 출력
	cout << result%MOD;
	return 0;
}

