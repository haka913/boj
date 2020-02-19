/*
 * 2965.cpp
 *
 *  Created on: 2018. 2. 24.
 *      Author: paulk
 */
#include <iostream>

using namespace std;

int main(){
	int a,b,c;
	cin >> a >> b >> c;
	cout << (c-b>b-a? c-b-1:b-a-1) << endl;
}



