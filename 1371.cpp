/*
 * 1371.cpp
 *
 *  Created on: 2018. 2. 22.
 *      Author: paulk
 */
#include <iostream>

using namespace std;

int main(){
	string s;
	int alp[26] = {0};
	int max=-1;

	while(cin>>s){
		for(int i = 0 ; i < s.length();i++){
			alp[s[i]-'a']++;
		}
		s="";
	}

	for(int i = 0 ; i < 26;i++){
		if(max < alp[i]){
			max = alp[i];
		}
	}

	for(int i = 0 ; i < 26;i++){
		if(alp[i] == max){
			cout << (char) ('a'+i);
		}
	}
}



