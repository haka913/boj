/*
 * 4948.cpp
 *
 *  Created on: 2018. 11. 13.
 *      Author: paulk
 */
#include <iostream>
#include <cmath>
using namespace std;
bool isPrime(int n){
	if(n==1) return false;
	if(n==2) return true;
	for(int i =2;i<sqrt(n)+1;i++){
		if(n%i==0) return false;
	}
	return true;
}
int main(){
//	int n;
//	cin >> n;
	while(true){
		int n;
		cin >> n;
		if(n==0) break;
		int cnt =0;
		for(int i = n+1;i<=2*n;i++){
			if(isPrime(i)) cnt++;
		}
		cout << cnt<<"\n";
//		cin >> n;
	}
	return 0;
}



