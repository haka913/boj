/*
 * 16396.cpp
 *
 *  Created on: 2018. 12. 16.
 *      Author: paulk
 */
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
//vector<pair<int,int>> v(n); 로 해보기
int main() {
	int n;
	cin >> n;
	bool b[10001]={false};
	while (n--) {
		int x, y;
		cin >> x >> y;

		for (int i = x; i < y; i++) {
			b[i] = true;
		}
	}
	int result = 0;
	for (int i = 1; i <= 10000; i++) {
		if (b[i])
			result++;
	}
	cout << result;
	return 0;
}

