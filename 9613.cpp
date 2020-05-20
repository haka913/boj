/*
 * 9613.cpp
 *
 *  Created on: 2018. 12. 12.
 *      Author: paulk
 */
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
	int t;
	int n,tmp;
	cin >> t;
	while(t--){
		vector<int> v;
		cin>>n;
		for(int i = 0 ; i < n; i++){
			cin >> tmp;
			v.push_back(tmp);
		}

		long long result =0;
		for(int i = 0 ; i <n-1;i++){
			for(int j = i+1;j<n;j++){
				result += __gcd(v[i],v[j]);
			}
		}
		cout << result <<"\n";
	}
	return 0;
}



