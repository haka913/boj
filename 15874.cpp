/*
 * 15874.cpp
 *
 *  Created on: 2018. 12. 10.
 *      Author: paulk
 */
#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	int k,length;
	cin >> k;
	cin>> length;
	cin.ignore();
	getline(cin,s);
	k %=26;

	for(int i = 0 ; i < length;i++){
		if(s[i]>='A' && s[i] <='Z'){
			s[i] = (s[i] - 'A'+k)%26+'A';
		}
		else if(s[i]>='a' && s[i] <='z'){
			s[i] = (s[i] - 'a'+k)%26+'a';
		}
	}
	cout << s;
}

