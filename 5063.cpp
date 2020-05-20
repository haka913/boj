/*
 * 5063.cpp
 *
 *  Created on: 2018. 12. 12.
 *      Author: paulk
 */
#include <iostream>

using namespace std;

int main(){
	int n;
	cin >>n;
	int r,e,c;
	while(n--){
		cin >>r>>e>>c;
		if(r==(e-c)) cout <<"does not matter\n";
		else if(r<(e-c)) cout <<"advertise\n";
		else if(r>(e-c)) cout <<"do not advertise\n";
	}
	return 0;
}



