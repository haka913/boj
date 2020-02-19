/*
 * 5692.cpp
 *
 *  Created on: 2019. 2. 23.
 *      Author: paul
 */
#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int fact[]={1,2,6,24,120};

int main(){
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	string s;
	while(true){
		cin >> s;
		if(s[0]=='0') break;

		int result=0;
		for(int i = 0 ; i <s.length();i++){
			result += (s[i]-'0')*fact[s.length()-i-1];
//			cout << "s[i]: " << (s[i]-'0')<< "   fact[i] : " << fact[s.length()-i] <<endl;
//			cout << "recent: " << (s[i]-'0')*fact[s.length()-i]<<endl;
		}
		cout << result<<"\n";

	}
	return 0;
}



