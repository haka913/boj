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
	time_t timer;//�ð�����
	timer = time(NULL);//���� �ð��� �� ������ ���
	t = localtime(&timer);//�� ������ �ð��� �и��Ͽ� ����ü�� �ֱ�
	cout << t->tm_year+1900<<'-';
	//%02d == setw(2)<<setfill('0')
	cout<<setw(2)<<setfill('0')<<t->tm_mon+1<<'-'<<t->tm_mday;
	return 0;
}



