/*
 * 2133.cpp
 *
 *  Created on: 2018. 12. 4.
 *      Author: paul
 */
#include <iostream>

using namespace std;

int main(){
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	int n;
	int dp[31] ={1,0,3};
	cin >> n;
	for(int i = 4;i<=n;i+=2){
		dp[i] = dp[i-2]*3;
		for(int j = 4; j<=i;j+=2){
			dp[i]+=dp[i-j]*2;
		}
	}
	cout << dp[n];
	return 0;
}



