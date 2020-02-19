/*
 * 10808.cpp
 *
 *  Created on: 2018. 12. 11.
 *      Author: paul
 */
#include <iostream>
#include <string>

using namespace std;

int main(){
	string s;
	cin >> s;
	int num[26]={0};
	for(int i = 0 ; i <s.size();i++){
		num[s[i]-'a']++;
	}

	for(int i = 0 ; i <26;i++){
		cout << num[i] << " ";
	}
	return 0;
}



