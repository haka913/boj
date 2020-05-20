/*
 * 5893.cpp
 *
 *  Created on: 2018. 12. 16.
 *      Author: paulk
 */
#include <iostream>
#include <string>

using namespace std;
int main() {
	string s, shifted;
	cin >> s;
	string res = shifted = s + "0000";
	int pos = res.size();
	for (int i = s.size() - 1; i >= 0; i--) {
		pos--;
		if (s[i] == '0')
			continue;
		res[pos]++;
	}
	for (int i = res.size() - 1; i > 0; i--) {
		if (res[i] >= '2') {
			res[i - 1] += (res[i] - '0') / 2;
			res[i] = ((res[i] - '0') % 2) + '0';
		}
	}

	if (res[0] == '2')
		res.replace(0, 1, "10");
	else if (res[0] == '3')
		res.replace(0, 1, "11");
	else if (res[0] == '4')
		res.replace(0, 1, "100");

	cout << res;
	return 0;
}
// 101101110000
// 000010110111
// 110000100111

//1010101010100000
//0000101010101010
//1011010101001010
//1011010101001010

//11111111111111111111111
//1000011111111111111111101111
