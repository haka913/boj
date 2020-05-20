/*
 * 1152.cpp
 *
 *  Created on: 2018. 12. 11.
 *      Author: paul
 */
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main(){
	string s;
	getline(cin, s);
	stringstream stream1;
	stream1.str(s);
	int count =0;
	string tmp;
	while(stream1>>tmp){
		count++;
	}
	cout << count;
	return 0;
}



