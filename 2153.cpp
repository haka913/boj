/*
 * 2153.cpp
 *
 *  Created on: 2019. 2. 19.
 *      Author: paul
 */
#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

bool isPrime(int n){
	//이 문제에서만 1을 소수로 판단
	if(n==1) return true;
	for(int i = 2;i<n;i++){
		if(n%i==0){
			return false;
		}
	}
	return true;
}

int main(){
	string s;
	cin >> s;
	int result =0;
	for(int i = 0 ;i < s.length();i++){
		if(s.at(i)>='a' && s.at(i)<='z'){
			result += s.at(i)-'a'+1;
		}else if(s.at(i)>='A' && s.at(i)<='Z'){
			result +=s.at(i)-'A'+27;
		}
	}
//	cout << result << endl;
	if(isPrime(result)){
		cout <<"It is a prime word.";
	}else{
		cout <<"It is not a prime word.";
	}
	return 0;
}



