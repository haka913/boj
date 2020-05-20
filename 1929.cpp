/*
 * 1929.cpp
 *
 *  Created on: 2018. 11. 6.
 *      Author: paulk
 */
#include <iostream>
#include <algorithm>

using namespace std;
const int MAX = 1000000;
//bool isPrime(int n){
//	if(n==1) return false;
//	for(int i = 2;i<n;i++){
//		if(n%i==0) return false;
//	}
//	return true;
//}

int main() {

	bool c[MAX + 1] = { false };
	c[0] = c[1] = true;

	for (int i = 2; i * i <= MAX; i++) {
		if (c[i] == false) {
			for (int j = i * i; j <= MAX; j = j + i) //j+1이 아니고  i임
				c[j] = true;
		}
	}

	int m, n;
	cin >> m >> n;
	for (int i = m; i <= n; i++) {
		if (c[i] == false) {
			cout << i << "\n";
		}
	}
	return 0;
}

