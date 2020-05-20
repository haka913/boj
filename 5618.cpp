/*
 * 5618.cpp
 *
 *  Created on: 2018. 12. 10.
 *      Author: paulk
 */
#include <iostream>

using namespace std;
int gcd(int m, int n){
	int r;
	while(n){
		r = m%n;
		m=n;
		n=r;
	}
	return m;
}

void print(int n){
	for(int i = 1;i<=n;i++){
		if(n%i==0) cout <<i<<"\n";
	}
}

int main(){
	int n;
	cin >> n;
	int a,b,c;
	if(n==2){
		cin >>a>>b;
		print(gcd(a,b));
	}
	else{
		cin >>a>>b>>c;
		print(gcd(gcd(a,b),c));
	}
	return 0;
}



