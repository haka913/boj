/*
 * 5361.cpp
 *
 *  Created on: 2018. 12. 21.
 *      Author: paulk
 */
#include <iostream>

using namespace std;

int main(){
	int t;
	cin >> t;
	double price[5]={350.34,230.90,190.55,125.30,180.90};
	while(t--){
		int arr[5]={0};
		for(int i = 0 ; i <5;i++){
			cin >> arr[i];
		}
		double result = 0;
		for(int i = 0 ; i < 5;i++){
			result += price[i]*(double) arr[i];
		}
		cout <<fixed;
		cout.precision(2);
		cout <<"$"<<result<<endl;
	}
	return 0;
}



