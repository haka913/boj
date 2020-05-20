/*
 * 11052.cpp
 *
 *  Created on: 2019. 2. 16.
 *      Author: paul
 */
#include <iostream>
#include <algorithm>

using namespace std;

//dp[i] = i°³ »òÀ» ¶§ ÃÖ´ñ°ª
// 		= dp[i-j]¹øÂ° ÃÖ´ñ°ª + jÆÑ  ¼¼Æ®ÀÇ °¡°Ý
int dp[1001];
int card[1001];
int n;
int main(){
	cin >> n;
	for(int i =1;i<=n;i++){
		cin >> card[i];
	}
	for(int i = 1;i<=n;i++){
		for(int j =1;j<=i;j++){
//			if(dp[i]<dp[i-j]+card[j]){
//				dp[i]=dp[i-j]+card[j];
//			}
			dp[i] = max(dp[i],dp[i-j]+card[j]);
		}
	}
	cout << dp[n];
	return 0;
}



