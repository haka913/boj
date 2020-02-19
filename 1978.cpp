/*
 * 1978.cpp
 *
 *  Created on: 2018. 11. 5.
 *      Author: paul
 */
#include <iostream>
using namespace std;

bool isPrime(int n){
	if(n==1) return false;
	for(int i = 2; i <n;i++){
		if(n%i==0){
			return false;
		}
	}
	return true;
}

int main(){
	int N;
	int cnt =0;
	cin >> N;
	int nn;
	for(int i = 0 ; i <N;i++){
		cin >>nn;
		if(isPrime(nn)) cnt++;
	}
	cout << cnt;
	return 0;
}



