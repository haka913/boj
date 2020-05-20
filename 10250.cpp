/*
 * 10250.cpp
 *
 *  Created on: 2018. 11. 26.
 *      Author: paul
 */
#include <iostream>

using namespace std;

int main(){
	int t;
	int h,w,n;
	cin >> t;
	while(t--){
		cin >>h>>w>>n;
		n--;
		cout << (n%h+1)*100+(n/h)+1 <<"\n";
	}
	return 0;
}



