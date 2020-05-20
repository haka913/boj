/*
 * 2805.cpp
 *
 *  Created on: 2019. 2. 9.
 *      Author: paul
 */

//ÀÌºÐÅ½»ö

#include <iostream>
#include <algorithm>

const int MAX = 1000000;
using namespace std;

int tree[MAX];
int main(){
	int n,m;
	cin >> n>>m;
	int left =1;
	int right=0;
	for(int i = 0 ; i <n;i++){
		cin >> tree[i];
		right = max(right,tree[i]);
	}
	while(left<=right){
		int mid = (left+right)/2;
		long long sum = 0;

		for(int i = 0;i<n;i++){
			sum += tree[i]-mid>0 ? tree[i]-mid:0;
		}
		if(sum<m){
			right = mid -1;
		}
		else{
			left = mid+1;
		}

	}

	cout << right;

	return 0;
}



