/*
 * 2884.cpp
 *
 *  Created on: 2018. 11. 21.
 *      Author: paul
 */
#include <iostream>

using namespace std;

int main(){
	int h,m;
	bool hchange = false;
	cin >> h>> m;
	if(m<45) {
		m+=15;	//60-45
		hchange = true;
	}
	else m-=45;

	if(hchange){
		if(h) h-=1;
		else h = 23;
	}

	cout << h << " " << m;
	return 0;
}



