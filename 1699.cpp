/*
 * 1699.cpp
 *
 *  Created on: 2018. 11. 21.
 *      Author: paul
 */
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int dp[100001]={0};
	int n;
	cin >> n;

	for(int i = 1; i <n+1;i++){
		//initialize
		dp[i] = i;
		for(int j = 1; j*j<=i;j++){
			dp[i] = min(dp[i],dp[i-j*j]+1);
		}
	}

	cout << dp[n];

	return 0;
}


