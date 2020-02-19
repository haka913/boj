/*
 * 2312.cpp
 *
 *  Created on: 2018. 12. 16.
 *      Author: paulk
 */
#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin >> t;

	int n;
	while (t--) {
		cin >> n;
		for (int i = 2; i <= n; i++) {
			int cnt = 0;
			while (n % i == 0) {
				cnt++;
				n /= i;
			}
			if (cnt)
				cout << i << " " << cnt << "\n";
		}
	}

	return 0;
}

