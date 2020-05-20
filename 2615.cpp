/*
 * p128omok.cpp
 *
 *  Created on: 2019. 2. 6.
 *      Author: paul
 */
#include <iostream>
#include <algorithm>

using namespace std;
//19*19
//0 none 1 black 2 white
//1 black win 2 white win 0 not yet
//most left or top index
//8way but duplicate
//¡æ,¡é,¢Ù,¢×(=¢Ö)
int omok[19 + 2][19 + 2];
int dx[] = { 0, 1, 1, -1 };
int dy[] = { 1, 1, 0, 1 };
//		  ¡æ,¢Ù,¡é,¢Ö


// ¡æ
int search1(int color, int i, int j, int cnt) {
	for (; color == omok[i][j + 1]; j++) {
		cnt++;
	}
	return cnt == 5 ? 1 : 0;
}

//¢Ù
int search2(int color, int i, int j, int cnt) {
	for (; color == omok[i + 1][j + 1];i++, j++) {
		cnt++;
	}
	return cnt == 5 ? 1 : 0;
}
//¡é
int search3(int color, int i, int j, int cnt) {
	for (; color == omok[i + 1][j]; i++) {
		cnt++;
	}
	return cnt == 5 ? 1 : 0;
}
//¢Ö
int search4(int color, int i, int j, int cnt) {
	for (; color == omok[i - 1][j + 1]; i--,j++) {
		cnt++;
	}
	return cnt == 5 ? 1 : 0;
}

int main() {
	for (int i = 1; i <= 19; i++) {
		for (int j = 1; j <= 19; j++) {
			cin >> omok[i][j];
		}
	}

	for (int i = 1; i <= 19; i++) {
		for (int j = 1; j <= 19; j++) {
			if (omok[i][j] != 0) {
				if (omok[i][j - 1] != omok[i][j]
						&& search1(omok[i][j], i, j, 1) == 1) {
					cout << omok[i][j] << "\n" << i << " "<< j;
					return 0;

				}
				if (omok[i - 1][j - 1] != omok[i][j]
						&& search2(omok[i][j], i, j, 1) == 1) {
					cout << omok[i][j] << "\n" << i << " "<< j;
					return 0;

				}
				if (omok[i - 1][j] != omok[i][j]
						&& search3(omok[i][j], i, j, 1) == 1) {
					cout << omok[i][j] << "\n" << i << " "<< j;
					return 0;

				}
				if (omok[i + 1][j - 1] != omok[i][j]
						&& search4(omok[i][j], i, j, 1) == 1) {
					cout << omok[i][j] << "\n" << i << " "<< j;
					return 0;

				}
			}
		}
	}
	cout <<"0";
	return 0;
}
//0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0
//1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0
//0 1 0 0 0 2 1 2 2 0 0 0 0 0 0 0 0 0 0
//0 0 1 2 0 0 1 2 1 0 0 0 0 0 0 0 0 0 0
//0 0 0 1 2 0 2 0 0 0 0 0 0 0 0 0 0 0 0
//0 0 0 0 1 2 2 0 0 0 0 0 0 0 0 0 0 0 0
//0 0 1 1 2 1 2 0 0 0 0 0 0 0 0 0 0 0 0
//0 0 0 0 0 0 0 1 0 0 0 0 0 0 0 0 0 0 0
//0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0
//0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0
//0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0
//0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0
//0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0
//0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0
//0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0
//0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0
//0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0
//0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0
//0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0
//
//2
//7 5
