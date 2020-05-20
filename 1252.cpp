/*
 * 1252.cpp
 *
 *  Created on: 2019. 2. 23.
 *      Author: paul
 */
#include <iostream>
#include <string>
#include <algorithm>
//#include <bitset>

using namespace std;
string addBinary(string s1, string s2) {
	string result = "";
	int carryup = 0;
	int size = s1.length();
	reverse(s1.begin(),s1.end());
	reverse(s2.begin(),s2.end());
	for(int i = 0 ; i <size;i++){
		int t1 = (s1[i]-'0')+(s2[i]-'0')+carryup;
		carryup = t1/2;
		t1 = t1%2;
		result +=to_string(t1);
	}
	if(carryup==1){
		result +=to_string(1);
	}
	return result;
}
int main() {
	string s1, s2;
	cin >> s1 >> s2;
//	if (s1.length() < s2.length()) {
//		swap(s1, s2);
//	}
	while (s1.length() != s2.length()) {
		if (s1.length() < s2.length()) {
			s1.insert(0,"0");
		}else{
			s2.insert(0,"0");
		}
	}
	cout << s1<< " "<< s2<<endl;
	string ans = addBinary(s1,s2);
	reverse(ans.begin(),ans.end());
	while(true){
		if(ans=="0") break;
		if(ans[0]=='0' && ans.length()!=1){
			ans.erase(0,1);
		}else{
			break;
		}
	}
	cout << ans;
//	cout << bitset<4>(5) << endl;

	return 0;
}

