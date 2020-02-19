/*
 * 5988.cpp
 *
 *  Created on: 2018. 11. 6.
 *      Author: paul
 */
#include <iostream>
#include <string>

using namespace std;

int main(){
	int n;
	cin >> n;
	while(n--){
		string k;
		cin>>k;
		if(k.at(k.size()-1)%2==0) cout << "even" << "\n";
		else cout << "odd" << "\n";
	}
	return 0;
}



