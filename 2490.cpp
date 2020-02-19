/*
 * 2490.cpp
 *
 *  Created on: 2018. 2. 25.
 *      Author: paul
 */
#include <iostream>
using namespace std;
char yut[] = {'E', 'A','B','C','D'};
int main() {
	for (int i = 0; i < 3; i++) {
		int count = 4;
		for(int j = 0 ; j <4; j++){
			int tmp;
			cin >>tmp;
			count -= tmp;
		}
		cout <<yut[count] << endl;
	}

}

