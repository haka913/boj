/*
 * 2798.cpp
 *
 *  Created on: 2018. 2. 25.
 *      Author: paul
 */
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	int n, m;
	cin >> n>>m;
	vector<int> ap;
	int result = 0 ;
	for(int i = 0 ; i < n ; i ++){
		int card;
		cin >> card;
		ap.push_back(card);
	}
	for(int i = 0 ; i < n-2 ; i++){
		for(int j = i+1 ; j < n-1; j++){
			for(int k = j+1 ; k < n;k++){
				int cost = ap[i]+ap[j]+ap[k];
				if(cost <=m) result = max(cost, result);
			}
		}
	}
	cout << result << endl;
}



