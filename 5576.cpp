/*
 * 5576.cpp
 *
 *  Created on: 2018. 12. 17.
 *      Author: paulk
 */
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	vector<int> w(10);
	vector<int> k(10);
	for (int i = 0; i < 10; i++) {
		cin >> w[i];
	}
	for (int i = 0; i < 10; i++) {
		cin >> k[i];
	}
	sort(w.begin(),w.end());
	sort(k.begin(),k.end());
	reverse(w.begin(),w.end());
	reverse(k.begin(),k.end());
	int wScore = w[0]+w[1]+w[2];
	int kScore = k[0]+k[1]+k[2];
	cout << wScore << " " <<kScore;
	return 0;
}

