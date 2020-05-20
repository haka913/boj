/*
 * 10214.cpp
 *
 *  Created on: 2018. 11. 27.
 *      Author: paul
 */
#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	int y, k;

	for (int j = 0; j < t; j++) {
		int yw = 0;
		int kw = 0;
		for (int i = 0; i < 9; i++) {
			cin >> y >> k;
			if (y > k)
				yw += 1;
			else if (y < k)
				kw += 1;
			else {
				yw += 1;
				kw += 1;
			}
		}
		if (yw > kw)
			cout << "Yonsei\n";
		else if (yw < kw)
			cout << "Korea\n";
		else
			cout << "Draw\n";
	}

	return 0;
}

