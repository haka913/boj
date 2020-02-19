/*
 * 2870.cpp
 *
 *  Created on: 2018. 12. 14.
 *      Author: paul
 */
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int cmp(string s1, string s2){
	if(s1.size()!=s2.size()) return s1.size()< s2.size();
	return s1<s2;
}

int main(){
	int n;
	cin>>n;
	vector<string> v;
	string s;
	for(int i =0;i<n;i++){
		string digit="";
		cin >> s;
		for(int i = 0 ; i < s.size();i++){
			if(isdigit(s[i])){
				if(digit=="0") digit[0]=s[i];
				else digit.push_back(s[i]);
			}
			else if(digit.size()>0){
				v.push_back(digit);
				digit="";
			}
		}
		if(digit.size()>0) v.push_back(digit);
	}
	sort(v.begin(),v.end(),cmp);

	for(auto s : v){
		cout << s<<"\n";
	}
	return 0;
}
