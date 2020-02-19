/*
 * 2577.cpp
 *
 *  Created on: 2018. 2. 24.
 *      Author: paul
 */
#include <iostream>
#include <string>
using namespace std;

int main() {
	int a, b, c;
	cin >> a >> b >> c;
	int mul = a * b * c;
	int count[10] = { 0 };
	string mult = to_string(mul);
//	cout << mul << endl;
//	cout << mult << endl;
//	cout << mult.length() << endl;
	for (int i = 0; i < mult.length(); i++) {
		if (mult[i] == '0') {
			count[0]++;
		} else if (mult[i] == '1') {
			count[1]++;
		} else if (mult[i] == '2') {
			count[2]++;
		}else if (mult[i] == '3') {
			count[3]++;
		}else if (mult[i] == '4') {
			count[4]++;
		}else if (mult[i] == '5') {
			count[5]++;
		}else if (mult[i] == '6') {
			count[6]++;
		}else if (mult[i] == '7') {
			count[7]++;
		}else if (mult[i] == '8') {
			count[8]++;
		}else if (mult[i] == '9') {
			count[9]++;
		}
	}
	for(int i = 0 ; i < 10;i++){
		cout << count[i] <<endl;
	}
}

