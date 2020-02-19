/*
 * 2293.cpp
 *
 *  Created on: 2018. 11. 21.
 *      Author: paul
 */
#include <iostream>
using namespace std;

int main() {
	int n, k;
	cin >> n >> k;
	int coin[101]={0};
	int v[10001]={0};
	v[0]=1;
	int coinN;
	for (int i = 1; i <= n; i++) {
		cin >> coin[i];
	}
//	for (int i = 0; i <= n; i++) {
//		cout << coin[i] << " ";
//	}
//	cout << endl;

	for (int i = 1; i <= n; i++) {
		for (int j = coin[i]; j <= k; j++) {
			v[j] += v[j - coin[i]];
//			cout << "v[" << j<<"]" <<"is " << v[j]<<endl;
		}
//		cout << endl;
	}

//	for (int i = 1; i <= k; i++) {
//		cout << v[i] << " ";
//	}
//	cout << endl;

	cout << v[k];
	return 0;
}

