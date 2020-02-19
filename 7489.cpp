/*
 * 7489.cpp
 *
 *  Created on: 2018. 12. 11.
 *      Author: paul
 */
#include <iostream>

using namespace std;

long long lastFact(long long n){
	long long fact =1;
	for(int i = 1;i<=n;i++){
		fact*=i;
		while(fact%10==0){
			fact/=10;
		}
		fact%=1000000000;
	}
	return fact%10;
}

int main(){
	int t;
	long long n;
	cin >> t;
	while(t--){
		cin >> n;
		cout << lastFact(n)<<"\n";
	}
	return 0;
}



