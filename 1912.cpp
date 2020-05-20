/*
 * 1912.cpp
 *
 *  Created on: 2019. 2. 6.
 *      Author: paulk
 */
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int n;
	int arr[100001] = { 0 };
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	int dp[100001] = { 0 };
	dp[0] = arr[0];
	int result = dp[0];

	for (int i = 1; i < n; i++) {
		dp[i]=max(dp[i-1]+arr[i],arr[i]);
	}

	for(int i =0;i<n;i++){
		result = max(result,dp[i]);
	}

	cout << result;

	return 0;
}

