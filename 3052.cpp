/*
 * 3052.cpp
 *
 *  Created on: 2018. 12. 17.
 *      Author: paul
 */
#include <iostream>
#include <set>

using namespace std;

int main(){
	int n;
	set<int> s;
	for(int i = 0 ; i<10;i++){
		cin >> n;
		s.insert(n%42);
	}
	cout << s.size();

	return 0;
}


