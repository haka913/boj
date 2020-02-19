/*
 * 3047.cpp
 *
 *  Created on: 2018. 12. 11.
 *      Author: paul
 */
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	string s;
	int ar[3];
	cin >> ar[0] >> ar[1] >> ar[2];
	cin >> s;
	sort(ar, ar + 3);
	for (int i = 0; i < 3; i++) {
		cout << ar[s[i]-'A'] << " ";
	}
	return 0;
}

