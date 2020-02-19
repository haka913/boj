/*
 * 13458.cpp
 *
 *  Created on: 2019. 2. 20.
 *      Author: paul
 */
#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	int n,A,B,C;
	cin >> n;
	int ar[100001];

	for(int i = 0 ; i < n;i++){
		cin >> ar[i];
	}

	int major;
	int submajor;
	cin >> major >> submajor;

	long long result=0;
	for(int i=0;i<n;i++){
		ar[i] -=major;
		result ++;
		if(ar[i]>0){
			if(ar[i]%submajor==0){
				result +=(ar[i]/submajor);
			}else{
				result +=(ar[i]/submajor)+1;
			}
		}
	}

	cout << result;
	return 0;
}



