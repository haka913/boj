/*
 * 1094.cpp
 *
 *  Created on: 2018. 11. 7.
 *      Author: paulk
 */

// �������� �ٲپ������� 1�� ������ ����
#include <iostream>

using namespace std;

int bina(int n){
	int cnt =0;
	while(n){
		if(n%2==1) cnt++;
		n/=2;
	}
	return cnt;
}
int main(){
	int n;
	cin >> n;
	cout << bina(n);
	return 0;
}



