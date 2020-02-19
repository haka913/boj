/*
 * 2909.cpp
 *
 *  Created on: 2018. 12. 23.
 *      Author: paulk
 */
#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int c,k;
	cin >> c>>k;
	int money = (int)pow(10,k);
	int result = (c/money)*money;
	if(c%money >= money/2) result +=money;
	cout << result;
	return 0;
}



