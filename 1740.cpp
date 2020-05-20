/*
 * 1740.cpp
 *
 *  Created on: 2019. 3. 28.
 *      Author: paul
 */
#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	long long n;
	cin >> n;
	long long result =0;

	for(long long i = 1; n!=0;i*=3,n>>=1){
		cout << i << endl;
		result +=(n&1)*i;
	}

	cout << result;

	return 0;
}



