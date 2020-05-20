/*
 * 11651.cpp
 *
 *  Created on: 2019. 2. 18.
 *      Author: paul
 */
#include <iostream>
#include <algorithm>
#include <utility>

using namespace std;

int main(){
	int n;
	cin >> n;
	pair<int,int> p[n];
	for(int i = 0 ; i < n;i++){
		cin >> p[i].second >> p[i].first;
	}
	sort(p,p+n);
	for(int i = 0 ; i < n;i++){
		cout << p[i].second << " " << p[i].first<<"\n";
	}
	return 0;
}



