/*
 * 16395.cpp
 *
 *  Created on: 2018. 11. 17.
 *      Author: paulk
 */
#include <iostream>
using namespace std;
//이 수는 이항계수 C(n-1,k-1)
int main(){
	int n,k;
	cin >> n>>k;
	int result =1;
	for(int i = 1;i<=k-1;i++){
		result=result*(n-i)/i;
	}
	cout <<result;
	return 0;
}



