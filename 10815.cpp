/*
 * 10815.cpp
 *
 *  Created on: 2018. 12. 16.
 *      Author: paulk
 */
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	int n, m;
	vector<int> v;
	cin >>n;
	int tmp;
	for(int i = 0 ; i < n ; i ++){
		cin >> tmp;
		v.push_back(tmp);
	}
	sort(v.begin(),v.end());
	cin >> m;

	for(int i = 0 ; i < m;i++){
		cin >> tmp;
		cout << binary_search(v.begin(),v.end(),tmp) << " ";
	}
	return 0;
}



