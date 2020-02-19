/*
 * 6679.cpp
 *
 *  Created on: 2018. 12. 11.
 *      Author: paulk
 */
#include <iostream>

using namespace std;
int numeral(int n, int digit){
	int result =0;
	while(n){
		result += n%digit;
		n/=digit;
	}
	return result;
}
int main(){
	for(int i = 1000;i<=9999;i++){
		int a = numeral(i,10);
		int b = numeral(i,12);
		int c = numeral(i,16);
		if(a==b and b==c) cout <<i <<"\n";
	}

	return 0;
}



