/*
 * 2998.cpp
 *
 *  Created on: 2019. 2. 23.
 *      Author: paul
 */
#include <iostream>
#include <algorithm>
#include <string>

using namespace std;
string biToOct[8]={"000","001","010","011","100","101","110","111"};
int main(){
	string s;
	cin >> s;

	while(s.length()%3!=0){
		s.insert(0,"0");
	}
	string result="";
	while(s.length()!=0){
		string sub1 = s.substr(0,3);
		s.erase(0,3);
		for(int i = 0 ; i <8;i++){
			if(sub1==biToOct[i]){
				result +=to_string(i);
			}
		}

	}
	cout << result;
	return 0;
}



