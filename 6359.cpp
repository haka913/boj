/*
 * 6359.cpp
 *
 *  Created on: 2019. 2. 19.
 *      Author: paul
 */
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;
//N���� ���� ���� ���� �����ִ� ������ �쿬���� �������� ���� Ȯ���� �� �ִ�
//int(sqrt(n))
int main(){
	int t,n;
	cin >> t;
	while(t--){
		cin >> n;
		vector<bool> dp(n+1,false);
		for(int i = 1;i<=n;i++){
			for(int j = i;j<=n;j+=i){
				dp[j]=!dp[j];
			}
		}
		int result = 0;
		for(int i =1;i<=n;i++){
			result += dp[i];
		}
		cout << result <<"\n";


//		cout << int(sqrt(n))<<"\n";
	}
	return 0;
}



