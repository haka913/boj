/*
 * 1427.cpp
 *
 *  Created on: 2019. 2. 6.
 *      Author: paulk
 */
#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

bool cmp(int a,int b){
	return a>b;
}

int main(){
	string n;
	cin >> n;
	sort(n.begin(),n.end(),cmp);
	cout << n;
	return 0;
}



