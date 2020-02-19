/*
 * 8741.cpp
 *
 *  Created on: 2018. 11. 2.
 *      Author: paulk
 */
#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>

using namespace std;
//다른방법으로는 규칙이 있다, k번 1이 나오고 k-1번 0이 나온다
//for(int i = 0; i < k;i++) cout <<"1";
//for(int i = 1;i <k;i++) cout <<"0";
string bin(int n) {
	string bin = "";
	while (n != 0) {
		if (n % 2 == 0) {
			bin.insert(0, "0");
		} else { //n%2==1
			bin.insert(0, "1");
		}
		n /= 2;
	}
	return bin;
}

int main() {
	int k;
	cin >> k;
	int last = (int) pow(2, k) - 1;
	int result = last * (last + 1) / 2;
	cout << last << " " << result << "\n";
	string bi = bin(result);
	cout << bi;
	return 0;
}

