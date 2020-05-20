/*
 * 1316.cpp
 *
 *  Created on: 2019. 2. 6.
 *      Author: paul
 */
#include <iostream>
#include <string>

using namespace std;

bool checkAlpha(string s){
	bool alpha[26]={false};

	for(int i = 0 ; i<s.length();i++){
		if(alpha[s[i]-'a']) return false;
		else{
			char tmp = s[i];
			alpha[s[i]-'a'] = true;

			while(true){
				if(tmp != s[++i]){
					i--;
					break;
				}
			}
		}
	}

	return true;
}

int main(){
	int n;
	cin>>n;
	string s;
	int result=0;
	while(n--){
		cin >> s;
		if(checkAlpha(s)){
			result++;
		}
	}
	cout << result;

	return 0;
}



