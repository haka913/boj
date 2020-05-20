/*
 * 2869.cpp  snail
 *
 *  Created on: 2018. 2. 21.
 *      Author: paulk
 */

#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

int main(){
	int up, slide, height;
	ifstream in("2869.inp");
	in >> up >> slide >> height;
	int day = ceil((double) (height-up)/(up-slide));
	cout << day+1;
}


