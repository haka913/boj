/*
 * 2156.cpp
 *
 *  Created on: 2019. 2. 8.
 *      Author: paulk
 */
#include <iostream>
#include <algorithm>

using namespace std;

int ar[10001];
int dp[10001];

int main(){
	int n;
	cin >>n;
	for(int i =1;i<=n;i++){
		cin >> ar[i];
	}
	dp[1]=ar[1];
	for(int i=2;i<=n;i++){
		//dp[n]=max(dp[n-1],dp[n-2]+ar[n],dp[n-3]+ar[n-1]+ar[n])
		//0�� ���� ���� ��, ���� �����Ŷ� �����Ƿ� dp[n]=dp[n-1]
		//1�� ���� ���� ��, �� �ܰ迡�� ���� �ʾ����� ���� �ܰ� ar[n]�� ���ϸ� ��
		//			  dp[n]=dp[n-2]+ar[n]
		//2�� �������� ���� ��, �� �ܰ迡�� �Ծ���, ���� �ܰ迡�� ���� �ʾ�����, ������ �ܰ�(dp[n-3])�� ar[n-1]+ar[n]����
		//				dp[n]=dp[n-3]+ar[n-1]+ar[n]
//		dp[i]=max(dp[i-1],dp[i-2]+ar[i]);
//		dp[i]=max(dp[i],dp[i-3]+ar[i-1]+ar[i]);
		dp[i]=max(dp[i-1],max(dp[i-2]+ar[i],dp[i-3]+ar[i-1]+ar[i]));
	}
	cout << dp[n];
	return 0;
}



