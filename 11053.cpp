/*
 * 11053.cpp
 *
 *  Created on: 2019. 2. 16.
 *      Author: paul
 */
#include <iostream>
#include <algorithm>
#include <vector>
//[최장 증가 수열] LIS(Longest Increasing Subsequence)

using namespace std;
int n;
int ar[1001];
int main() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> ar[i];
	}
	vector<int> v(n + 1, 1001);
	for (int i = 0; i < n; i++) {
		int idx = lower_bound(v.begin(), v.end(), ar[i]) - v.begin();
		v[idx] = ar[i];
//		for (int i = 0; i < n; i++) {
//			cout << v[i] << " ";
//		}
//		cout << endl;
	}

//	cout << "last" << endl;
//	for (int i = 0; i < n; i++) {
//		cout << v[i] << " ";
//	}
//	cout << endl;
	int result = lower_bound(v.begin(), v.end(), 1001) - v.begin();
	cout << result;
	return 0;
}

