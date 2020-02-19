/*
 * 1652.cpp
 *
 *  Created on: 2018. 12. 4.
 *      Author: paulk
 */
#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin >> n;
	int map[101][101];
	string s;
	for (int i = 0; i < n; i++) {
		cin >> s;
		for (int j = 0; j < n; j++) {
			if (s[j] == '.') {
				map[i][j] = 1;
			} else {
				map[i][j] = 0;
			}
		}
	}

	int row = 0;
	for (int i = 0; i < n; i++) {
		int count = 0;
		for (int j = 0; j < n; j++) {
			if (map[i][j] == 1) {
				count++;
			} else {
				if (count >= 2) {
					row++;
				}
				count = 0;
			}
		}
		if (count >= 2)
			row++;
	}

	int col = 0;
	for (int j = 0; j < n; j++) {
		int count = 0;
		for (int i = 0; i < n; i++) {
			if (map[i][j] == 1) {
				count++;
			} else {
				if (count >= 2) {
					col++;
				}
				count = 0;
			}
		}
		if (count >= 2)
			col++;
	}

	cout << row << " " << col;
	return 0;
}

