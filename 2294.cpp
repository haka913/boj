/*
 * 2294.cpp
 *
 *  Created on: 2018. 12. 4.
 *      Author: paul
 */
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	int n,k;
	int dp[10001]={0};
	int coin[101];
	cin >> n>>k;
	for(int i = 1;i<=k;i++){
		dp[i]=10001;
	}
	for(int i = 0 ; i <n;i++){
		cin>>coin[i];
	}

	for(int i =0;i<n;i++){
		for(int j = coin[i];j<=k;j++){
			dp[j]=min(dp[j],dp[j-coin[i]]+1);
		}
	}

	if(dp[k]==10001) cout <<-1;
	else cout <<dp[k];
	return 0;
}



