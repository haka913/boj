/*
 * 1463.cpp
 *
 *  Created on: 2018. 11. 12.
 *      Author: paul
 */
#include <iostream>
#include <algorithm>

using namespace std;
int d[1000001]={0,0,1,1};

int main(){
	int n;
	cin >> n;
	for(int i = 4;i<=n;i++){
		d[i] = d[i-1]+1;
		if(i%2==0) d[i]=min(d[i/2],d[i-1])+1;
		if(i%3==0) d[i]=min(d[i/3],d[i-1])+1;
	}
	cout << d[n];
	return 0;
}



