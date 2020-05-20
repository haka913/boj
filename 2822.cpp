/*
 * 2822.cpp
 *
 *  Created on: 2019. 2. 9.
 *      Author: paul
 */
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool cmp(int a, int b) {
	return a > b;
}

int main() {
	vector<int> v(8);
	for (int i = 0; i < 8; i++) {
		cin >> v[i];
	}
	int result = 0;
	vector<int> a;
	a = v;
	sort(v.begin(), v.end(), cmp);
	for(int i = 0 ; i <5;i++){
		result +=v[i];
	}
	cout << result <<"\n";
	vector<int>::iterator iter;
	vector<int> index;
	for(int i = 0 ; i <5;i++){
		iter = find(a.begin(),a.end(),v[i]);
		index.push_back(iter-a.begin()+1);
	}
	sort(index.begin(), index.end());
	for(int i = 0 ; i <index.size();i++){
		cout << index[i]<<"\n";
	}
	return 0;
}

