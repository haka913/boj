/*
 * 1212.cpp
 *
 *  Created on: 2018. 11. 28.
 *      Author: paulk
 */
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
string ocToBi(char s) {
	string temp = "";
	int tmp = s - '0';
	while (tmp != 0) {
		if (tmp % 2 == 0) {
			temp += "0";
		} else {
			temp += "1";
		}
		tmp /= 2;
	}
	while (temp.size() != 3) {
		temp += "0";
	}
	reverse(temp.begin(), temp.end());
	return temp;
}
int main() {
	string o;
	cin >> o;
	if (o == "0") {
		cout << "0";
	} else {
		string result = "";
		for (int i = 0; i < o.size(); i++) {
			result += ocToBi(o.at(i));
		}
		if (result.at(0) == '0') {
			result.erase(result.begin());
			if(result.at(0)=='0')
				result.erase(result.begin());
		}
		cout << result;
	}
	return 0;
}
