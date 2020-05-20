/*
 * 3034.cpp
 *
 *  Created on: 2018. 11. 27.
 *      Author: paul
 */
#include <iostream>
using namespace std;

int main(){
	int n,w,h;
	cin >> n>>w>>h;
	int s;
	for(int i = 0 ; i < n;i++){
		cin >>s;
		if((w*w+h*h)>=s*s) cout << "DA\n";
		else cout << "NE\n";
	}
	return 0;
}
