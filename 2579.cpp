/*
 * 2579.cpp
 *
 *  Created on: 2018. 11. 13.
 *      Author: paul
 */
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int n;
	cin >> n;
	int stair[301] = { 0 };
	int sum[301] = { 0 };
	for (int i = 1; i <= n; i++) {
		cin >> stair[i];
	}
	sum[1] = stair[1];
	sum[2] = stair[2]+stair[1];
	for (int i = 3; i <= n; i++) {
		sum[i] = max(stair[i - 1] + sum[i - 3], sum[i - 2]) + stair[i];
	}
	cout << sum[n];

	return 0;
}

