/*
 * 14501.cpp
 *
 *  Created on: 2019. 2. 20.
 *      Author: paul
 */
#include <iostream>
#include <algorithm>

using namespace std;
int n;
int T[16];
int P[16];
int dp[16];

int main(){
	cin >> n;
	for(int i = 0 ; i < n;i++){
		cin >> T[i]>>P[i];
	}

	//dp[i]를 i일차에 얻을 수 있는 최대 수익
	//i일차 상담 했을 경우 T[i]일 이후에 i일차에 상담해서 번 수익을 기대할 수 있음
	//이전에 상담하지 않았어도 i일차 이후에 상담하는 경우가 더 큰 수익을 얻을 수 있으므로
	//i+1일차에 i일차에 상담하지 않았을 경우 수익과 i+1일차에 수익 중 큰 값을 dp[i+1]을 넣는다
	//dp[n]은 n일까지 상담한 최대 수익

	for(int i = 0 ; i <n;i++){
		//이전에 상담하지 않았어도 i일차 이후에 상담하는 경우가 더 큰 수익을 얻을 수 있으므로
		//i+1일차에 i일차에 상담하지 않았을 경우 수익과 i+1일차에 수익 중 큰 값을 dp[i+1]을 넣는다
		dp[i+1] = max(dp[i+1],dp[i]);
		//i일차 상담 했을 경우 T[i]일 이후에 i일차에 상담해서 번 수익을 기대할 수 있음
		dp[i+T[i]] = max(dp[i+T[i]],dp[i]+P[i]);
	}

	cout << dp[n];
	return 0;
}



