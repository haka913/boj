/*
 * 2355.cpp
 *
 *  Created on: 2018. 2. 22.
 *      Author: paul
 */
#include <iostream>

using namespace std;

int main(){
	long long int n , m;
	cin >> n >> m;
	if(n>m){
		int tmp;
		tmp = n;
		n = m;
		m = tmp;
	}
	cout << (n+m)*(m-n+1)/2 << endl;
}
