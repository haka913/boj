/*
 * 10409.cpp
 *
 *  Created on: 2018. 12. 23.
 *      Author: paulk
 */
#include <iostream>

using namespace std;

int main() {
	int n, T;
	cin >> n >> T;
	int result = 0;
	int cnt = 0;
	for (int i = 0; i < n; i++) {
		int tmp;
		cin >> tmp;
		if (result + tmp > T)
			break;
		else {
			result += tmp;
			cnt++;
		}
	}
	cout << cnt;
	return 0;
}

