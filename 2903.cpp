/*
 * 2903.cpp
 *
 *  Created on: 2018. 12. 23.
 *      Author: paulk
 */
#include <iostream>

using namespace std;
// 다음 점은 현재의 점의 개수의 -1 만큼 증가
// An= An+(An-1)
//총 점의 개수 An*An
int main(){
	int n;
	cin >> n;
	int result = 2;
	for(int i = 0 ; i < n;i++){
		result +=result-1;
	}
	cout << result*result;

	return 0;
}
