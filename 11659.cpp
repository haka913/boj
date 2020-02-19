/*
 * 11659.cpp
 *
 *  Created on: 2019. 2. 6.
 *      Author: paul
 */
#include <iostream>

using namespace std;

int main() {
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int n,m;
	cin >> n>>m;
	int arr[100001]={0};
	for(int i = 1;i<=n;i++){
		cin >>arr[i];
		arr[i]+=arr[i-1];
	}
	int a,b;
	while(m--){
		cin >>a>>b;
		cout << arr[b]-arr[a-1]<<"\n";
	}


	return 0;
}

