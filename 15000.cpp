/*
 * 15000.cpp
 *
 *  Created on: 2018. 11. 30.
 *      Author: paulk
 */
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	string s;
	cin >>s;
	transform(s.begin(),s.end(),s.begin(),::toupper);
	//transform(s.begin(),s.end(),s.begin(),(int(*)(int))toupper);
	cout <<s;
}



