/*
 * 1259.cpp
 *
 *  Created on: 2018. 11. 2.
 *      Author: paulk
 */
#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

int main(){
	while(true){
		string str;
		cin >> str;
		if(str.compare("0")==0) break;

		bool result = true;
		for(int i = 0 ; i < str.size();i++){
			if(str[i]!=str[str.size()-i-1]){
				result = false;
				break;
			}
		}
		cout << (result ? "yes":"no") << "\n";


	}
	return 0;
}



