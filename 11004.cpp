/*
 * 11004.cpp
 *
 *  Created on: 2018. 11. 17.
 *      Author: paulk
 */
#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdio>
//cin���� �� �� �ð� �ʰ� ��, scanf�� �Ұ�
using namespace std;

int main(){
	int n,k,p;
	cin >> n>>k;
	vector<int> v;
//	while(n--){
//		cin >> p;
//		v.push_back(p);
//	}
	for(int i = 0 ; i<n;i++){
		scanf("%d", &p);
		v.push_back(p);
	}
	sort(v.begin(),v.end());
//	nth_element(v.begin(),v.begin()+k-1,v.end());
	cout << v[k-1];
	return 0;
}



