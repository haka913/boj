/*
 * 2748.cpp
 *
 *  Created on: 2018. 11. 21.
 *      Author: paulk
 */
#include <iostream>

using namespace std;
//90을 넣으면 int범위 초과 long long으로
int main(){
	int n;
	cin >> n;
	long long *fibo = new long long[n+1];
	fibo[0]=0;
	fibo[1]=1;
	for(int i = 2 ; i < n+1; i++){
		fibo[i] = fibo[i-1]+fibo[i-2];
	}
	cout << fibo[n];
	delete[] fibo;
	return 0;
}



