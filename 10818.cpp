/*
 * 10818.cpp
 *
 *  Created on: 2018. 12. 18.
 *      Author: paulk
 */
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
	int n;
	cin >>n;
	vector<int> v(n);
	for(int i = 0 ; i < n; i++){
		cin >> v[i];
	}
	sort(v.begin(),v.end());
	cout << v[0] << " " << v[n-1];
	return 0;
}



