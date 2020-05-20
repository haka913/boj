/*
 * 1297.cpp
 *
 *  Created on: 2018. 2. 22.
 *      Author: paulk
 */
#include <iostream>
#include <cmath>

using namespace std;

int main(){
	int inch, a,b;
	cin >>inch >> a>>b;

	double c = sqrt(a*a+b*b);
	double ta = a*inch/c;
	double tb = b*inch/c;

	cout << (int) ta << " " <<  (int) tb;

}



