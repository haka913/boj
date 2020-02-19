/*
 * 5585.cpp
 *
 *  Created on: 2019. 2. 9.
 *      Author: paul
 */
#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	n = 1000 - n;
	int cnt = 0;
	int coin[]={500,100,50,10,5,1};

	for(int i = 0 ; i<6;i++){
		cnt += n/coin[i];
		n -= coin[i]*(n/coin[i]);
	}
	cout << cnt;
	return 0;
}

