/*
 * 1547.cpp
 *
 *  Created on: 2018. 11. 26.
 *      Author: paul
 */
#include <iostream>

using namespace std;

int main() {
	int m;
	cin >> m;
	int x, y;
	bool check[4] = { false, true, false, false }; // 1,2,3 cup
	for (int i = 0; i < m; i++) {
		cin >> x >> y;
		if (check[x] == true) {
			check[x] = false;
			check[y] = true;
		} else if (check[y] == true) {
			check[y] = false;
			check[x] = true;
		}
	}
	for (int i = 1; i < 4; i++) {
		if (check[i] == true)
			cout << i;

	}
	return 0;
}

