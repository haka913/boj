/*
 * 7600.cpp
 *
 *  Created on: 2019. 2. 12.
 *      Author: paul
 */
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
//공백 포함 문자열 입력받기
//getline(cin,string)
int main() {
	string s;
	getline(cin, s);

	int result;
	while (s != "#") {
		int check[26]={0};
		result =0;
		transform(s.begin(), s.end(), s.begin(), ::toupper);
		for (int i = 0; i < s.length(); i++) {
			if (s.at(i) >= 65 && s.at(i) <= 90){
				check[s.at(i)-65]=1;
			}
		}
		for(int i = 0 ; i<26;i++){
			result +=check[i];
		}
		cout << result<<"\n";
//		cin.ignore(256,'\n');
		getline(cin, s);
	}
	return 0;
}

