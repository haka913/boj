/*
 * 1748.cpp
 *
 *  Created on: 2018. 2. 24.
 *      Author: paul
 */
#include <iostream>
#include <string>
using namespace std;
int len(int n){
	int count = 0;
	while(n){
		n /=10;
		count++;
	}
	return count;
}
int main(){
	int n;
	cin >> n;
//	string result = "";
	long long result = 0;
	for(int i = 1; i <= n ; i ++){
		result += len(i);
	}
	cout <<result << endl;
}



