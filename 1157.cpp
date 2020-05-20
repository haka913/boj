/*
 * 1157.cpp
 *
 *  Created on: 2018. 12. 17.
 *      Author: paulk
 */
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
	int cnt[26]={0};
	string s;
	cin >> s;
	transform(s.begin(),s.end(),s.begin(),::toupper);
	for(int i = 0 ; i < s.size();i++){
		cnt[s[i]-65]++;
	}
	int duplicate = 0;
	int maxt =0;
	int pos =0;
	for(int i = 0 ; i < 26;i++){
		maxt = max(maxt,cnt[i]);
	}
	for(int i = 0 ; i <26;i++){
		if(maxt==cnt[i]) {
			duplicate++;
			pos = i;
		}
	}
	if(duplicate==1) cout << (char)(pos+65);
	else cout << "?";

	cout << endl;
	return 0;
}



