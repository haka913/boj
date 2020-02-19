/*
 * 11650.cpp
 *
 *  Created on: 2019. 2. 9.
 *      Author: paul
 */
#include <iostream>
#include <utility> //pair<T1,T2> p
#include <algorithm>
#include <vector>

using namespace std;

bool cmp(pair<int,int> a,pair<int,int> b){
	if(a.first==b.first) return a.second<b.second;
	else return a.first<b.first;
}

int main(){
	int n;
	cin >> n;
	vector<pair<int,int>> v;
	int x,y;
	for(int i = 0 ; i < n;i++){
		cin >>x>>y;
		v.push_back(make_pair(x,y));
	}
	sort(v.begin(),v.end());
	//cmp써도 무방
//	sort(v.begin(),v.end(),cmp);

	for(int i = 0;i<n;i++){
		cout << v[i].first <<" " <<v[i].second <<"\n";
	}
	return 0;
}



