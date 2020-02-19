/*
 * 1072.cpp
 *
 *  Created on: 2019. 2. 17.
 *      Author: paul
 */
#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	long long x,y;
	cin >> x>>y;

	int z = y*100/x;

	if(z>=99){
		cout << -1;
		return 0;
	}

	int left = 0;
	int right = 1000000000;
	int result=-1;
	while(left<=right){
		int mid = (left+right)/2;

		int tempz=(100*(y+mid))/(x+mid);

		if(z>=tempz){
			result = mid+1;
			left = mid+1;
		}
		else{
			right = mid-1;
		}
	}
	cout << result;
	return 0;
}


