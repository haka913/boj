/*
 * 10699.cpp
 *
 *  Created on: 2018. 12. 11.
 *      Author: paul
 */
#include <iostream>
#include <ctime>
#include <iomanip>

using namespace std;

int main(){
	struct tm *t;
	time_t timer;//시간측정
	timer = time(NULL);//현재 시각을 초 단위로 얻기
	t = localtime(&timer);//초 단위의 시간을 분리하여 구조체에 넣기
	cout << t->tm_year+1900<<'-';
	//%02d == setw(2)<<setfill('0')
	cout<<setw(2)<<setfill('0')<<t->tm_mon+1<<'-'<<t->tm_mday;
	return 0;
}



