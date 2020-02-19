/*
 * 1010.cpp
 *
 *  Created on: 2018. 11. 7.
 *      Author: paulk
 */
#include <iostream>
#include <algorithm>

using namespace std;
//combination
//mCn = m!/(n!*(m-n)!)
int main(){
	int T;
	cin >>T;
	while(T--){
		int n,m;
		cin>> n>> m;
		int ans=1;
		for(int i=1;i<=n;i++){
			ans = ans*(m-i+1)/i;
		}
		cout << ans<<"\n";
	}
	return 0;
}



