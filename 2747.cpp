/*
 * 2747.cpp
 *
 *  Created on: 2018. 11. 9.
 *      Author: paul
 */
#include <iostream>

using namespace std;

int fibo(int n){
	static int fib[46];
	fib[0] =0; fib[1]=fib[2]=1;
	if(fib[n]) return fib[n];
	return fib[n] = fibo(n-2)+fibo(n-1);
}

int main(){
	int n;
	cin >> n;
	cout << fibo(n);
	return 0;
}



