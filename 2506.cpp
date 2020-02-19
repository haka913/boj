/*
 * 2506.cpp
 *
 *  Created on: 2018. 12. 14.
 *      Author: paulk
 */
#include <iostream>
#include <vector>
using namespace std;
//8958°ú µ¿ÀÏ
int main(){
	int n;
	int result =0;
	cin >> n;
	vector<int> v(n);
	for(int i = 0 ; i<n;i++){
		cin >> v[i];
	}
	int count =0;
	for(int i =0  ;i < n;i++){
		if(v[i]==1) count++;
		else count =0;
		result +=count;
	}
	cout << result;
	return 0;
}



