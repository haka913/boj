/*
 * 2864.cpp
 *
 *  Created on: 2018. 11. 21.
 *      Author: paul
 */
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
//stoi는 c++11이상부터 지원
int main(){
	string a,b;
	cin >> a>>b;
	replace(a.begin(),a.end(),'5','6');
	replace(b.begin(),b.end(),'5','6');
	int maxValue = stoi(a)+stoi(b);
	replace(a.begin(),a.end(),'6','5');
	replace(b.begin(),b.end(),'6','5');
	int minValue = stoi(a)+stoi(b);
	cout << minValue << " " <<maxValue;
	return 0;
}



