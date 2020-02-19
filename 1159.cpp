/*
 * 1159.cpp
 *
 *  Created on: 2019. 2. 9.
 *      Author: paul
 */
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
	int n;
	string s;
	cin >> n;
	int alpha[26] = { 0 };
	for (int i = 0; i < n; i++) {
		cin >> s;
		alpha[s.at(0) - 'a']++;
	}
	bool canPlay = false;
	int alphaIndex[26] = { 0 };
	vector<int> v;

	for (int i = 0; i < 26; i++) {
		if (alpha[i] >= 5) {
			canPlay = true;
			v.push_back(i);
		}
	}
	if (canPlay) {
		for (auto i : v) {
			cout << char(i + 'a');
		}
	} else {
		cout << "PREDAJA";
	}
	return 0;
}

