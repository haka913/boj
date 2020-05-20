/*
 * 1965.cpp
 *
 *  Created on: 2019. 2. 19.
 *      Author: paul
 */
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

//LIS
int ar[1001];
int main(){
	int n;
	cin >> n;
	int len =0;
	int tmp;
	for(int i = 0 ; i < n;i++){
		cin >> tmp;
		auto it = lower_bound(ar,ar+len,tmp);
		if(*it==0) len++;
		*it = tmp;
	}

	cout << len;
//	cout << endl;
//	for(int i = 0 ; i < n;i++){
//		cout << ar[i] << " ";
//	}

	return 0;
}



