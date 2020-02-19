/*
 * 10871.cpp
 *
 *  Created on: 2019. 2. 9.
 *      Author: paul
 */
#include <iostream>
using namespace std;

int main(){
	int n,x;
	cin >> n>>x;

	int tmp;
	for(int i = 0 ; i < n;i++){
		cin >>tmp;
		if(tmp<x) cout <<tmp <<" ";
	}

	return 0;
}



