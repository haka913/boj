/*
 * 5073.cpp
 *
 *  Created on: 2018. 12. 11.
 *      Author: paulk
 */
#include <iostream>

using namespace std;

int main() {
	int a, b, c;
	while (true) {
		cin >> a >> b >> c;
		if (a == 0 and b == 0 and c == 0)
			break;

		if(a>=b+c or b>=a+c or c>=a+b)
			cout << "Invalid\n";
		else if (a == b and a == c)
			cout << "Equilateral\n";
		else if(a==b or b==c or a==c)
			cout << "Isosceles\n";
		else
			cout <<"Scalene\n";

	}
	return 0;
}

