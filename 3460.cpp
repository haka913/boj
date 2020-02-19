/*
 * 3460.cpp
 *
 *  Created on: 2019. 2. 14.
 *      Author: paulk
 */
#include <iostream>
#include <string>

using namespace std;

string toBinaryReverse(int n){
	string bi ="";
	while(n!=0){
		bi+= to_string(n%2);
		n/=2;
	}
	return bi;
}
void print(string s){
	for(int i = 0 ; i <s.length();i++){
		if(s.at(i)=='1'){
			cout <<i << " ";
		}
	}
	cout << "\n";
}
int main(){
	int t;
	cin >>t;
	int n;
	string s;
	while(t--){
		cin >> n;
		s= toBinaryReverse(n);
		print(s);
	}
	return 0;
}



