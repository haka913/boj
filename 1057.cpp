/*
 * 1057.cpp
 *
 *  Created on: 2018. 11. 15.
 *      Author: paul
 */
#include <iostream>

using namespace std;

int main(){
	int n, kn, imn;
	cin >> n >>kn>>imn;
	int cnt=0;
	while(kn!=imn){
		kn = kn/2+kn%2;
		imn = imn/2+imn%2;
		cnt++;
	}
	cout <<cnt;
	return 0;
}



