/*
 * 10872.cpp
 *
 *  Created on: 2018. 11. 13.
 *      Author: paul
 */
#include <iostream>

using namespace std;

int main(){
	int n;
	cin >> n;
	int fact= 1;
	for(int i = n; i >0;i--){
		fact*=i;
	}
	cout << fact ;
	return 0;
}



