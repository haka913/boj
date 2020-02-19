/*
 * 8974.cpp
 *
 *  Created on: 2019. 3. 27.
 *      Author: paul
 */
#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	int a,b;
	cin >> a>> b;
	int result =0;
	for(int i = 1,k=1,cnt=0;i<=b;i++){
		if(i>=a) result += k;
		if(++cnt == k){
			k++;
			cnt=0;
		}
	}
	cout << result;
	return 0;
}



