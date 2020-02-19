/*
 * 5052.cpp
 *
 *  Created on: 2018. 11. 30.
 *      Author: paulk
 */
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	int t;
	int n;
	cin >>t;
	while(t--){
		cin >>n;
		vector<string> v(n);
		string tmp;
		for(int i =0  ; i < n;i++){
			cin >> v[i];
		}
		sort(v.begin(),v.end());
		bool result = true;
		for(int i=1;i<n;i++){
			string a = v[i-1];
			string b = v[i];
			if(a.size()>b.size()) continue;
			if(a==b.substr(0,a.size())){
				result = false;
				break;
			}
		}
		if(result){
			cout <<"YES\n";
		}else{
			cout << "NO\n";
		}
	}
	return 0;
}



