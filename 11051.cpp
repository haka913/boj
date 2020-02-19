/*
 * 11051.cpp
 *
 *  Created on: 2018. 11. 8.
 *      Author: paul
 */
#include <iostream>

using namespace std;
int combi[1001][1001];
int comb(int n, int k){
	if(n==k||k==0) return 1;
	if(combi[n][k]>0) return combi[n][k];
	return combi[n][k] = (comb(n-1,k-1) + comb(n-1,k))%10007;
}
int main() {
	int n, k;
	cin >> n >> k;
	cout << comb(n,k);
	return 0;
}

