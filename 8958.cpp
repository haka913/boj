/*
 * 8958.cpp
 *
 *  Created on: 2018. 11. 6.
 *      Author: paul
 */
#include <iostream>
#include <string>

using namespace std;

int main(){
	int n;
	cin >> n;
	while(n--){
		string s;
		int cnt =0;
		int result =0;
		cin >> s;
		for(int i = 0 ; i < s.size();i++){
			if(s.at(i)=='O') cnt++;
			else cnt =0;
			result += cnt;
		}
		cout << result <<"\n";
	}


	return 0;
}



