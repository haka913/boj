/*
 * 10798.cpp
 *
 *  Created on: 2018. 12. 10.
 *      Author: paulk
 */
#include <iostream>
#include <string>
using namespace std;

int main(){
	char s[5][15] ={NULL,};
	for(int i = 0 ; i <5;i++){
		cin >>s[i];
	}
	for(int j = 0 ; j<15;j++){
		for(int i = 0 ; i < 5;i++){
			if(s[i][j]==NULL) continue;
			cout << s[i][j];
		}
	}
	return 0;
}



