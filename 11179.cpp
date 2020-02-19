/*
 * 11179.cpp
 *
 *  Created on: 2019. 2. 14.
 *      Author: paulk
 */
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

string toBinaryReverse(int n){
	string bi ="";
	while(n!=0){
		bi+= to_string(n%2);
		n/=2;
	}
	return bi;
}

int toDec(string s){
	int temp=0;
//	cout << s.length()<<endl<<endl;
	for(int i = 0;i<s.length();i++){
		temp += (s.at(i)-'0')*pow(2,s.length()-1-i);
	}
	return temp;
}
int main(){
	int n;
	cin >> n;

	string s = toBinaryReverse(n);
	int result = toDec(s);
//	cout << s<<endl<<result;
	cout << result;
	return 0;
}


//13/2----6--1
//6/2-----3--0
//3/2-----1--1
//1/2-----0--1
