/*
 * 2455.cpp
 *
 *  Created on: 2018. 11. 27.
 *      Author: paul
 */
#include <iostream>

using namespace std;

int main(){
	int inside =0;
	int maxp=0;
	int input,out;
	for(int i = 0 ; i < 4; i++){
		cin >> out>>input;
		inside -= out;
		if(inside > maxp) maxp=inside;
		inside +=input;
		if(inside > maxp) maxp=inside;
	}
	cout << maxp;
	return 0;
}



