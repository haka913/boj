/*
 * 5363.cpp
 *
 *  Created on: 2018. 12. 11.
 *      Author: paulk
 */
#include <iostream>
#include <string>
#include <sstream>
using namespace std;
//I will go now to find the Wookiee
int main() {
	int n;
	cin >> n;
	cin.ignore();
	while (n--) {
		stringstream stream1;
		string s;
		getline(cin, s);
		string s1, s2;
		stream1.str(s);
		stream1 >> s1 >> s2;
		string s3;
		while (stream1 >> s3) {
			cout << s3 << " ";
		}
		cout << s1 << " " << s2 << "\n";
		stream1.clear();
	}
	return 0;
}

