/*
 * 5622.cpp
 *
 *  Created on: 2018. 11. 22.
 *      Author: paulk
 */
#include <iostream>
#include <string>

using namespace std;

int dialAlpha(char ch){
	if(ch<'D') return 2;
	if(ch<'G') return 3;
	if(ch<'J') return 4;
	if(ch<'M') return 5;
	if(ch<'P') return 6;
	if(ch<'T') return 7;
	if(ch<'W') return 8;
	return 9;

}

int main(){
	string dial;
	cin >> dial;
	int result = 0 ;
	for(int i = 0 ; i <dial.size();i++){
		result += dialAlpha(dial.at(i));
	}
	result += dial.size();
	cout << result;
	return 0;
}



