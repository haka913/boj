/*
 * 11055.cpp
 *
 *  Created on: 2019. 2. 19.
 *      Author: paul
 */
#include <iostream>
#include <algorithm>

using namespace std;

//1. dp�迭�� �ʱⰪ�� ó�� �Է¹��� ar�迭������ �����
//2. dp�迭 d[i] �� i��°�� �����ϴ� �κм����� ���� �ִ밪�̴�
//  -> dp[i]�� 0~j (j<i) ���� ar[i] > ar[j] �� ��� max(dp[i], dp[j] + ar[i]) �� �ȴ�
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

