/*
 * 2309.cpp
 *
 *  Created on: 2018. 12. 10.
 *      Author: paulk
 */
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	vector<int> a(9);
	int sum = 0;
	for (int i = 0; i < 9; i++) {
		cin >> a[i];
		sum += a[i];
	}
	sort(a.begin(), a.end());
//	cout << sum << endl;
//	for (auto i : a) {
//		cout << i << "\n";
//	}
	for (int i = 0; i < 8; i++) {
		for (int j = i + 1; j < 9; j++) {
			if (sum - a[i] - a[j] == 100) {
				for (int k = 0; k < 9; ++k) {
					if (i != k && j != k) {
						cout << a[k] << "\n";
					}
//					a.erase(a.begin() + i);
//					a.erase(a.begin() + j);
//					break;
				}
			}
		}
	}

//	for (auto i : a) {
//		cout << i << "\n";
//	}
	return 0;
}

