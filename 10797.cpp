/*
 * 10797.cpp
 *
 *  Created on: 2018. 11. 13.
 *      Author: paul
 */
#include <iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	int cnt=0;
	int p;
	while(cin >>p){
		if(p==n) cnt++;
	}
	cout << cnt;
	return 0;
}


