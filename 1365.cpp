/*
 * 1365.cpp
 *
 *  Created on: 2019. 2. 16.
 *      Author: paul
 */
#include <iostream>
#include <algorithm>
#include <utility>
#include <vector>

using namespace std;


int n;
vector<pair<int,int>> v;

int lis(){
	vector<int> L = vector<int>(n+1,100001);
	for(int i = 0 ;i<n;i++){
		int idx = lower_bound(L.begin(),L.end(), v[i].second)-L.begin();
		L[idx] = v[i].second;
	}
//	for(int i = 0;i<n;i++){
//		cout << L[i]<<" ";
//	}
//	cout << endl;
	return lower_bound(L.begin(),L.end(),100001)-L.begin();
}

int main(){
	cin >> n;
	for(int i =0;i<n;i++){
		int a;
		cin >> a;
		v.push_back(make_pair(i,a));
	}
	sort(v.begin(),v.end());
	cout << n-lis();
	return 0;
}

