/*
 * 3474.cpp
 *
 *  Created on: 2018. 12. 23.
 *      Author: paulk
 */
#include <iostream>

using namespace std;

int main(){
	 ios::sync_with_stdio(false); cin.tie(0);
	int t,n;
	cin >>t;
	while(t--){
		cin >> n;
		long long result =0;
		for(int i = 5;i<=n;i*=5){
			result +=n/i;
		}
		cout << result << "\n";
	}
	return 0;
}



