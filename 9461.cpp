/*
 * 9461.cpp
 *
 *  Created on: 2019. 2. 12.
 *      Author: paulk
 */
#include <iostream>
#include <algorithm>

using namespace std;
long long dp[101];
int main(){
	int t;
	cin>> t;
	int n;
	dp[0]=0;
	dp[1]=dp[2]=dp[3]=1;
	dp[4]=dp[5]=2;
	for(int i = 5;i<101;i++){
		dp[i]=dp[i-1]+dp[i-5];
	}
	while(t--){
		cin >> n;
		cout <<dp[n]<<"\n";
	}
	return 0;
}



