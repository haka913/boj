/*
 * 9324.cpp
 *
 *  Created on: 2019. 2. 19.
 *      Author: paul
 */
#include <iostream>
#include <string>

using namespace std;

int main(){
	int t;
	cin >>t;
	string s;

	while(t--){
		bool checkFake=false;
		cin >> s;
		int alpha[26]={0,};
		int size=s.length();
		for(int i = 0 ; i < size;i++){
			alpha[s.at(i)-'A']++;
			if(alpha[s.at(i)-'A']%3==0){
				if(i+1>=size || s.at(i+1)!=s.at(i)){
					checkFake = true;
					break;
				}
				i++;
			}
		}
		if(checkFake){
			cout <<"FAKE\n";
		}else{
			cout <<"OK\n";
		}
	}
	return 0;
}



