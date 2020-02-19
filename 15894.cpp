/*
 * 15894.cpp
 *
 *  Created on: 2019. 3. 1.
 *      Author: paul
 */
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	//왜 int n으로는 범위 벗어나는 값이 출력?
	long long n;
	cin >> n;
	long long result = 4*n;
	cout << result;
	return 0;
}

