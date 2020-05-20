/*
 * 11055.cpp
 *
 *  Created on: 2019. 2. 19.
 *      Author: paul
 */
#include <iostream>
#include <algorithm>

using namespace std;

//1. dp배열의 초기값은 처음 입력받은 ar배열값으로 만든다
//2. dp배열 d[i] 는 i번째를 포함하는 부분수열의 합중 최대값이다
//  -> dp[i]는 0~j (j<i) 까지 ar[i] > ar[j] 일 경우 max(dp[i], dp[j] + ar[i]) 가 된다
int ar[1001];
long long dp[1001];
int main() {
	int n;
	long long result = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> ar[i];
	}
	for (int i = 0; i < n; i++) {
		dp[i] = ar[i];
		for (int j = 0; j < i; j++) {
//			if (ar[j] < ar[i] && dp[i] < dp[j] + ar[i]) {
//				dp[i] = dp[j] + ar[i];
//			}
			if (ar[i] > ar[j]) {
				dp[i] = max(dp[j] + ar[i], dp[i]);
			}
		}
		result = max(result, dp[i]);
	}

//	for (int i = 0; i < n; i++) {
//		result = max(result, dp[i]);
//		cout << dp[i] << " ";
//	}
	cout << result;
	return 0;
}

