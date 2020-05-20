/*
 * 2410.cpp
 *
 *  Created on: 2018. 11. 22.
 *      Author: paulk
 */
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	int n;
	cin >> n;
	vector<long long> v(n+1,0);
	vector<long long> exp;
	for(int i = 1; i<n+1;i<<=1){
		exp.push_back(i);
	}
	v[0]=1;
	for(int i = 0; i < exp.size();i++){
		for(int j = exp[i];j<=n;j++){
			v[j] += v[j-exp[i]];
			v[j]%=1000000000;
//			cout << v[j] << " ";
		}
//		cout << endl;
	}
	cout << v[n];
	return 0;
}

// ????????
//for(int i=1;i<=N/2;i++)k[i]=(k[i-1]+k[i/2])%MOD;
//  cout<<k[N/2]<<endl;


//for (int i = 1; i <= T; i++) {
//		if(i%2 == 0) D[i] += D[i / 2];
//		D[i] %= (int)1e9;
//		D[i] += D[i - 1];
//		D[i] %= (int)1e9;
//	}

