/*
 * 16205.cpp
 *
 *  Created on: 2018. 12. 17.
 *      Author: paul
 */
#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
	int n;
	string s;
	cin >> n >> s;
	string camel, snake, pascal;
	switch (n) {
	case 1: {
		camel = s;
		snake = "";
		for (int i = 0; i < s.size(); i++) {
			if (s[i] >= 'A' and s[i] <= 'Z') {
				snake += "_";
				snake += tolower(s[i]);
			} else {
				snake += s[i];
			}
		}
		pascal = s;
		pascal[0] = toupper(s[0]);
		cout << camel << "\n" << snake << "\n" << pascal;
		break;
	}
	case 2: {
		snake = s;
		bool capss = false;
		camel = "";
		for (int i = 0; i < s.size(); i++) {
			if (s[i] == '_') {
				capss = true;
				continue;
			} else if (capss) {
				camel += toupper(s[i]);
				capss = false;
			} else {
				camel += s[i];
			}
		}
		pascal = camel;
		pascal[0] = toupper(pascal[0]);
		cout << camel << "\n" << snake << "\n" << pascal;
		break;
	}
	case 3: {
		camel = s;
		pascal = s;
		camel[0] = tolower(camel[0]);
		snake = "";
		for (int i = 0; i < s.size(); i++) {
			if (i == 0) {
				snake += tolower(s[i]);
			} else if (s[i] >= 'a' and s[i] <= 'z') {
				snake += s[i];
			} else {
				snake += "_";
				snake += tolower(s[i]);
			}
		}
		cout << camel << "\n" << snake << "\n" << pascal;
		break;
	}
	}
	return 0;
}

