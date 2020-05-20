/*
 * 1037.cpp
 *
 *  Created on: 2018. 11. 15.
 *      Author: paul
 */
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	int n;
	cin >>n;
	vector<int> v;
	while(n--){
		int t;
		cin>>t;
		v.push_back(t);
	}
	sort(v.begin(),v.end());
	cout << v[0]*v[v.size()-1];
	return 0;
}



