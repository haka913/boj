/*
 * 2292.cpp
 *
 *  Created on: 2018. 11. 10.
 *      Author: paulk
 */
#include <iostream>
#include <algorithm>

using namespace std;
//계차수열 a(n)=a(n-1)+6(n-1)
// a(n) = 3n^2-3n+1
int main(){
	int n;
	cin >> n;
	int cnt =1;
	int i=1,t=6;
	while(i<n){
		i+=t;
		t+=6;
		cnt++;
	}
//	for(int i = 1,t=6;i<n;i+=t,t+=6,cnt++);
	cout << cnt;
	return 0;
}



