/*
 * 1026.cpp
 *
 *  Created on: 2019. 2. 9.
 *      Author: paul
 */
#include <iostream>
#include <algorithm>

using namespace std;
int n;
int A[50];
int B[50];
bool comp(int a,int b){
	return a>b;
}
int main() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> A[i];
	}
	for (int i = 0; i < n; i++) {
		cin >> B[i];
	}

	sort(A,A+n);
	sort(B,B+n,comp);
	int result =0;
	for(int i = 0 ; i <n;i++){
		result+=A[i]*B[i];
	}
	cout <<result;

	return 0;
}

