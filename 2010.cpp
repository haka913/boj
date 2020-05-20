/*
 * 2010.cpp
 *
 *  Created on: 2018. 11. 27.
 *      Author: paulk
 */
#include <iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	int k;
	int sum =1;
	for(int i = 0 ; i < n; i++){
		cin >>k;
		sum+=k-1;
	}
	cout << sum;


	return 0;
}



