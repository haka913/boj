/*
 * 1065.cpp
 *
 *  Created on: 2019. 2. 7.
 *      Author: paul
 */
#include <iostream>

using namespace std;

int main(){
	int n;
	cin >> n;
	int cnt=99;
	if(n<100){
		cout << n;
	}
	else{
		for(int i = 100;i<=n;i++){
			int a,b,c;
			a = i/100;
			b = (i%100)/10;
			c = i%10;
			if(b-a==c-b) cnt++;
		}
		cout << cnt;
	}
	return 0;
}



