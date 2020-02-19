/*
 * 1924.cpp
 *
 *  Created on: 2018. 11. 12.
 *      Author: paulk
 */
#include <iostream>
#include <string>
using namespace std;
int main(){
	int month[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	string days[7]={"SUN","MON","TUE","WED","THU","FRI","SAT"};
	int x,y;
	cin >> x>>y;
	int day=0;
	for(int i = 0 ; i <x;i++){
		day +=month[i];
	}
	day+=y;
	day %=7;
	cout << days[day];

	return 0;
}



