/*
 * 1977.cpp
 *
 *  Created on: 2018. 2. 22.
 *      Author: paul
 */
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	int m,n;
	vector<int> com;
	cin >> m >> n;
	for(int i = 1 ; i*i <= n; i++){
		if(i*i>=m && i*i<=n){
			com.push_back(i*i);
		}
	}
	if(com.empty()){
		cout << "-1" << endl;
	}
	else{
		int sum = 0;
		for(unsigned int i = 0 ; i < com.size(); i++){
			sum+= com[i];
		}
		cout << sum << endl;
		cout << *min_element(com.begin(), com.end());
	}
}
