/*
 * 1735.cpp
 *
 *  Created on: 2018. 12. 12.
 *      Author: paulk
 */
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int a,b,c,d;
	cin >>a>>b>>c>>d;
	int numerator, denominator;
	denominator = b*d;
	numerator = a*d+b*c;
	int gccd = __gcd(numerator,denominator);
	cout << numerator/gccd << " " << denominator/gccd;
	return 0;
}



