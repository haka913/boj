/*
 * 5533.cpp
 *
 *  Created on: 2018. 12. 17.
 *      Author: paulk
 */
#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	int card[n][4] = { 0 };
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 3; j++) {
			cin >> card[i][j];
		}
	}


	for (int j = 0; j < 3; j++) {
		for (int i = 0; i < n; i++) {
			bool check = true;
			for (int k = 0; k < n; k++) {
				if (i != k and card[i][j] == card[k][j]) {
					check = false;
				}
			}

			if (check) {
				card[i][3] += card[i][j];
			}
		}
	}

//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < 4; j++) {
//			cout << card[i][j] << " ";
//		}
//		cout << endl;
//	}

	for (int i = 0; i < n; i++) {
		cout << card[i][3] << endl;
	}

	return 0;
}

