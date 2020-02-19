/*
 * 2986.cpp
 *
 *  Created on: 2018. 12. 16.
 *      Author: paulk
 */
#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
//N을 제외한 N의 약수중 최대값
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin >> n;
	int d=1;
	for(int i = sqrt(n);i>=2;i--){
		if(n%i==0){
			d = max(i,n/i);
		}
	}
	cout << n-d;
	return 0;
}

