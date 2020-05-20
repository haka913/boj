/*
 * 11006.cpp
 *
 *  Created on: 2019. 2. 17.
 *      Author: paul
 */
#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	int T;
	cin >> T;
	//´ß´Ù¸®¼ö,´ßÀÇ ¼ö
	int N,M;
	while(T--){
		cin >> N>>M;

		//Àß¸° ´ß, ¸ÖÂÄÇÑ ´ß
		int U,K;
		U = 2*M-N;
		K = M-U;
		cout << U << " " << K << "\n";
	}
	return 0;
}



