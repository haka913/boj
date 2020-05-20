/*
 * 2675.cpp
 *
 *  Created on: 2018. 12. 5.
 *      Author: paul
 */
#include <iostream>
#include <string>

using namespace std;

int main(){
	int t,r;
	string s;
	cin >> t;

	for(int i =0  ; i<t;i++){
		cin>>r;
		cin >> s;
		string result="";
		for(int i = 0 ; i < s.length(); i ++){
			for(int j = 0 ; j<r;j++){
				result+=s[i];
			}
		}
		cout << result<<"\n";
	}
	return 0;
}



