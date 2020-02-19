/*
 * 1181.cpp
 *
 *  Created on: 2018. 11. 18.
 *      Author: paul
 */
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool cmp(string s1, string s2) {
	if (s1.length() == s2.length()) {
		return s1 < s2;
	}
	return s1.length() < s2.length();
}
int main() {
	int n;
	cin >> n;
	string str;
	vector<string> v;
	vector<string>::iterator iter;
	while (n--) {
		cin >> str;
		iter = find(v.begin(), v.end(), str);
		if (iter == v.end()) {
			v.push_back(str);
		}
	}
	sort(v.begin(), v.end(), cmp);
	for (auto vs : v) {
		cout << vs << "\n";
	}
	return 0;
}

