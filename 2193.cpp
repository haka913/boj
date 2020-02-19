/*
 * 2193.cpp
 *
 *  Created on: 2018. 11. 25.
 *      Author: paulk
 */
#include <iostream>

using namespace std;

int main(){
	int n;
	long long pinary[91];
	pinary[0]=0;
	pinary[1]=1;
	cin >> n;
	for(int i =2 ; i < n+1;i++){
		pinary[i] = pinary[i-1]+pinary[i-2];
	}
	cout << pinary[n];
	return 0;
}



