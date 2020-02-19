/*
 * 12865.cpp
 *
 *  Created on: 2019. 2. 4.
 *      Author: paul
 */
#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;
int N,K;
int dp[101][100001];
int W[100],V[100];

int knapsack(int pos,int k){
	int &ret = dp[pos][k];
	if(ret !=-1) return ret;
	if(pos ==N) return ret= 0;

	ret = knapsack(pos+1,k);

	if(k+W[pos]<=K) ret = max(knapsack(pos+1,k+W[pos])+V[pos],ret);
	return ret;

}


int main(){

	cin >> N>>K;
	for(int i = 0 ; i < N ; i++){
		cin>>W[i]>>V[i];
	}
	memset(dp,-1,sizeof(dp));
	cout << knapsack(0,0);

	return 0;
}

//int main() {
//	int d[100001] = {};
//	int i, j, k, n, m;
//	scanf("%d%d", &n, &m);
//	while (n--) {
//		scanf("%d%d", &i, &j);
//		for (k = m; k >= i; k--) if (d[k - i] + j > d[k]) d[k] = d[k - i] + j;
//	}
//	printf("%d\n", d[m]);
//	return 0;
//}


