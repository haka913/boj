/*
 * 13301.cpp
 *
 *  Created on: 2018. 12. 5.
 *      Author: paul
 */
#include <iostream>

using namespace std;

int main(){
	long long n;
	long long dp[81];
	dp[0]=0;
	dp[1]=dp[2]=1;
	cin >> n;
	for(int i = 3 ; i <= n;i++){
		dp[i] = dp[i-2]+dp[i-1];
	}
	long long result = dp[n]*4+dp[n-1]*2;
	cout << result;
	return 0;
}



