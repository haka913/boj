/*
 * 2581.cpp
 *
 *  Created on: 2018. 11. 8.
 *      Author: paulk
 */
#include <iostream>
#include <cmath>
using namespace std;
bool isPrime(int n){
	if(n==1) return false;
	for(int i = 2;i<(int)sqrt(n)+1;i++){
		if(n%i==0) return false;
	}
	return true;
}
int main(){
	int m,n;
	cin >> m>>n;
	int sum = 0;
	int min =0;
	for(int i = m; i <=n;i++){
		if(isPrime(i)){
			sum += i;
			if(!min){
				min = i;
			}
		}
	}
	if(sum==0) cout << "-1";
	else cout << sum <<"\n"<<min;
	return 0;
}



