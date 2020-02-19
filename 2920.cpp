/*
 * 2920.cpp
 *
 *  Created on: 2018. 11. 26.
 *      Author: paul
 */
#include <iostream>
#include <string>
using namespace std;

int main(){
	string asc = "1 2 3 4 5 6 7 8";
	string des = "8 7 6 5 4 3 2 1";
	string inp;
	getline(cin, inp);
	if(inp==asc) cout << "ascending";
	else if(inp==des) cout << "descending";
	else cout << "mixed";
	return 0;
}



