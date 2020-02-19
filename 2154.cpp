/*
 * 2154.cpp
 *
 *  Created on: 2018. 12. 5.
 *      Author: paul
 */
#include <iostream>
#include <string>

using namespace std;

int main(){
	int n;
	string s="";
	cin >> n;
	for(int i = 1 ; i <= n;i++){
		s+=to_string(i);
	}
	int idx = s.find(to_string(n));
	cout << idx+1;
	return 0;
}



