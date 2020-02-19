/*
 * 9506.cpp
 *
 *  Created on: 2018. 12. 18.
 *      Author: paulk
 */
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int n;
	while (true) {
		cin >> n;
		if (n == -1)
			break;

		vector<int> v;
		int cnt = 0;
		for (int i = 1; i < n; i++) {
			if (n % i == 0) {
				v.push_back(i);
				cnt += i;
			}
		}

		if (cnt == n) {
			cout << n << " = 1";
			for (int i = 1; i < v.size(); i++) {
				cout << " + " << v[i];
			}
			cout << "\n";
		} else {
			cout << n << " is NOT perfect.\n";
		}

	}
	return 0;
}

