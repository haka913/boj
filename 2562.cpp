/*
 * 2562.cpp
 *
 *  Created on: 2019. 2. 8.
 *      Author: paulk
 */
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
	int n;
	vector<int> v;
	int maxT=-1;
	for(int i=0;i<9;i++){
		cin >>n;
		maxT = max(maxT,n);
		v.push_back(n);
	}
	vector<int>::iterator it= find(v.begin(),v.end(),maxT);
	cout << maxT<<"\n"<<it-v.begin()+1;
	return 0;
}



