/*
 * 1302.cpp
 *
 *  Created on: 2018. 11. 2.
 *      Author: paulk
 */
#include <iostream>
#include <algorithm>
#include <map>
#include <vector>
#include <string>
using namespace std;

int main() {
	map<string, int> map;
	int n;
	int max =0;
	string result;
	cin >> n;
	for (int i = 0; i < n; i++) {
		string name;
		cin >> name;
		map[name]++;
	}

	for(auto it=map.begin(); it!=map.end();it++){
		if(max < it->second){
			max = it->second;
			result = it->first;
		}
	}

	cout <<result<<"\n";

	return 0;
}

