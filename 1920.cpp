/*
 * 1920.cpp
 *
 *  Created on: 2019. 2. 6.
 *      Author: paul
 */
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	int n, m;
	int a[100001];
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	sort(a,a+n);
	cin >> m;
	int b;
	for (int i = 0; i < m; i++) {
		cin >> b;
		if(binary_search(a,a+n,b)){
			cout <<"1\n";
		}else{
			cout <<"0\n";
		}
	}
	return 0;
}

