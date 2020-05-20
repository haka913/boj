/*
 * 1764.cpp
 *
 *  Created on: 2018. 11. 13.
 *      Author: paul
 */
#include <iostream>
#include <set>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	set<string> s;
	vector<string> ans;
	string a;
	while(n--){
		cin >> a;
		s.insert(a);
	}
	while(m--){
		cin >> a;
		if(s.count(a)!=0){
			ans.push_back(a);
		}
	}
	sort(ans.begin(),ans.end());
	cout << ans.size() <<"\n";
	for(vector<string>:: iterator it = ans.begin() ; it != ans.end();it++){
		cout << *it <<"\n";
	}
	return 0;
}

