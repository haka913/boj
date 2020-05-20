/*
 * 4153.cpp
 *
 *  Created on: 2018. 12. 17.
 *      Author: paul
 */
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	vector<int> v(3);
	while(true){
		cin >> v[0]>>v[1]>>v[2];

		if(v[0]==0 and v[1]==0 and v[2]==0) break;
		sort(v.begin(),v.end());
		if(v[2]*v[2]==v[0]*v[0]+v[1]*v[1]) cout << "right\n";
		else cout <<"wrong\n";
	}
	return 0;
}



