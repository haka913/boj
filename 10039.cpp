/*
 * 10039.cpp
 *
 *  Created on: 2019. 2. 9.
 *      Author: paul
 */
#include <iostream>

using namespace std;

int main(){
	int n;
	int result =0;

	for(int i = 0 ; i < 5;i++){
		cin >>n;
		if(n<40) result+=40;
		else result +=n;
	}
	cout << result/5;
	return 0;
}



