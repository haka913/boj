/*
 * 10829.cpp
 *
 *  Created on: 2018. 12. 14.
 *      Author: paulk
 */
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

//주석은 바로바로 reverse필요없이 binary로 바꾸는 것
string toBinary(long long n){
	string bi="";
	while(n!=0){
		if(n%2==1){
			bi+='1';
//			bi.insert(0,"1");
		}
		else{
			bi+='0';
//			bi.insert(0,"0");
		}
		n/=2;
	}
	return bi;
}
int main(){
	long long n;
	cin >> n;

	string s;
	s = toBinary(n);
	reverse(s.begin(), s.end());
	cout << s;
	return 0;
}



