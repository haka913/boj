/*
 * 9012.cpp
 *
 *  Created on: 2019. 2. 27.
 *      Author: paul
 */
#include <iostream>
#include <string>
#include <algorithm>
#include <stack>

using namespace std;

bool isVPS(string s){
	int size = s.length();
	stack<char> sk;

	for(int i = 0 ; i < size;i++){
		char c = s[i];

		if(c=='('){
			sk.push(c);
		}else{
			if(!sk.empty()){
				sk.pop();
			}else{
				return false;
			}
		}
	}

	return sk.empty();
}

//또는 ( 와 ) 갯수 세어서 판단
int main(){
	int t;
	cin >> t;
	string s;
	while(t--){
		cin >> s;
		if(isVPS(s)){
			cout << "YES\n";
		}else{
			cout <<"NO\n";
		}
	}
	return 0;
}



