/*
 * 11365.cpp
 *
 *  Created on: 2019. 3. 1.
 *      Author: paul
 */
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
	while(true){
		string s;
		getline(cin, s);
		if(s=="END") break;
		reverse(s.begin(),s.end());
		cout << s<<"\n";
	}
	return 0;
}



