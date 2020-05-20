/*
 * 1350.cpp
 *
 *  Created on: 2018. 12. 5.
 *      Author: paul
 */
#include <iostream>

using namespace std;

int main(){
	int n;
	cin >>n;
	int *file = new int[n];
	for(int i = 0 ; i <n;i++){
		cin >> file[i];
	}
	int cluster;
	cin >> cluster;
	long long result=0;
	for(int i = 0 ; i < n ;i++){
		if(file[i]!=0){
			if(file[i]/cluster==0){
				result +=cluster;
			}
			else{
				if(file[i]%cluster!=0){
					result += cluster + (file[i]/cluster)*cluster;
				}
				else{
					result += (file[i]/cluster)*cluster;
				}
			}
		}
	}
	cout << result;
	return 0;
}



