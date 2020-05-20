/*
 * 2501.cpp
 *
 *  Created on: 2019. 2. 7.
 *      Author: paul
 */
#include <iostream>

using namespace std;

int main(){
	int n,k;
	cin >> n>>k;
	int cnt=0;
	for(int i = 1;i<=n;i++){
		if(n%i==0){
			cnt++;
			if(cnt==k){
				cout << i;
				return 0;
			}
		}
	}
	cout <<0;
}



