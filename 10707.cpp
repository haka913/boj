/*
 * 10707.cpp
 *
 *  Created on: 2019. 2. 9.
 *      Author: paul
 */
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int A, B, C, D, P;
	cin >> A >> B >> C >> D >> P;
	int aBill = P * A;
	int bBill = 0;
	if (P <= C) {
		bBill = B;
	}else{
		bBill = B+(P-C)*D;
	}
	int result = min(aBill,bBill);
	cout << result;
	return 0;
}

