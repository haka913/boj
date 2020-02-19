/*
 * 3036.cpp
 *
 *  Created on: 2018. 12. 21.
 *      Author: paulk
 */
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int n;
	cin >> n;
	int first;
	cin >> first;
	for(int i = 1;i<n;i++){
		int other;
		cin >> other;
		cout << first/__gcd(first,other)<<"/"<<other/__gcd(first,other)<<"\n";
	}

	return 0;
}



