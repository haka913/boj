/*
 * 14919.cpp
 *
 *  Created on: 2019. 3. 6.
 *      Author: paul
 */
#include <iostream>
#include <algorithm>
using namespace std;
int ar[1001];
//부동소수점 오차 주의
int main() {
	int m;

	cin >> m;
	double mod = (double) 1 / m;
//	mod += 1e-7;
//	int modd =  mod * 1e6;
//	cout << modd << endl;
	double n;
	while (cin >> n) {
		n += 1e-7;
//		int nn = n * 1e6;
//		cout << nn << endl;

		for (int i = 0; i < m; i++) {
			if (mod * i <= n && n < mod * (i + 1)) {
				ar[i]++;
				break;
			}
		}
	}
	for (int i = 0; i < m; i++) {
		cout << ar[i] << " ";
	}

	return 0;
}

