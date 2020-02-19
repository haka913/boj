/*
 * 11050.cpp
 *
 *  Created on: 2018. 11. 8.
 *      Author: paulk
 */
#include <iostream>

using namespace std;

int main(){
	int n,k;
	cin >> n >> k;
	int result=1;
	for(int i = 1; i <=k;i++){
		result = result*(n-i+1)/i;
	}
	cout << result;
	return 0;
}



