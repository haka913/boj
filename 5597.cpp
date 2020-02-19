/*
 * 5597.cpp
 *
 *  Created on: 2018. 12. 10.
 *      Author: paulk
 */
#include <iostream>

using namespace std;

int main() {
	bool submit[31] = { false };
	int n;
	for (int i = 0; i < 28; i++) {
		cin >>n;
		submit[n] = true;
	}
	for(int i = 1;i<31;i++){
		if(submit[i]==false) cout <<i<<"\n";
	}
}

