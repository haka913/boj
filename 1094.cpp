/*
 * 1094.cpp
 *
 *  Created on: 2018. 11. 7.
 *      Author: paulk
 */

// 이진수로 바꾸었을때의 1의 개수와 같음
#include <iostream>

using namespace std;

int bina(int n){
	int cnt =0;
	while(n){
		if(n%2==1) cnt++;
		n/=2;
	}
	return cnt;
}
int main(){
	int n;
	cin >> n;
	cout << bina(n);
	return 0;
}



