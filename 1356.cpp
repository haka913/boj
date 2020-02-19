/*
 * 1356.cpp
 *
 *  Created on: 2019. 2. 15.
 *      Author: paulk
 */
#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main(){
	string n;
	cin >> n;
	string tmp="";
	int len= n.length()-1;
	for(int i = 0 ; i < len;i++){
		tmp+=n[0];
		n.erase(n.begin());
		int frontV=1;
		int endV=1;
		for(int j = 0 ;j< tmp.length();j++){
			frontV*=(tmp[j]-'0');
		}
		for(int j = 0 ;j< n.length();j++){
			endV*=(n[j]-'0');
		}
//		cout << frontV <<" "<<endV<<endl;
		if(frontV==endV){
			cout <<"YES";
			return 0;
		}
	}
	cout <<"NO";
	return 0;
}



