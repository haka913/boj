/*
 * 1111.cpp
 *
 *  Created on: 2018. 12. 19.
 *      Author: paulk
 */
#include <iostream>

using namespace std;

int main(){
	int n;
	cin >> n;
	int ar[n];
	for(int i = 0 ; i < n ; i++){
		cin >> ar[i];
	}
	if(n==1){
		cout <<"A";
		return 0;
	}
	if(n==2){
		if(ar[0]==ar[1]){
			cout << ar[0];
			return 0;
		}
		cout << "A";
		return 0;
	}

	int a,b;
	if(ar[1]==ar[0]) a=0;
	else a=(ar[2]-ar[1])/(ar[1]-ar[0]);

	b = ar[1]-ar[0]*a;

	for(int i = 2; i<n;i++){
		if((ar[i-1]!=ar[i-2]) && (a!=(ar[i]-ar[i-1])/(ar[i-1]-ar[i-2]))){
			cout<<"B";
			return 0;
		}
		if(b!=ar[i]-ar[i-1]*a){
			cout << "B";
			return 0;
		}
	}
	cout << ar[n-1]*a+b;
	return 0;
}



