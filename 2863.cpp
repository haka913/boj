/*
 * 2863.cpp
 *
 *  Created on: 2018. 11. 21.
 *      Author: paulk
 */
#include <iostream>
using namespace std;

double divi(int a, int b, int c, int d){
	return a/c+b/d;
}
//������ double�� �ޱ�  (a,b,c,d)��
//�׷��� ������ ����ȯ (double)��Ű��
int main(){
	int a,b,c,d;
	double v[4];
	cin>>a>>b>>c>>d;
	v[0] = (double)a/c+(double)b/d;
	v[1] = (double)c/d+(double)a/b;
	v[2] = (double)d/b+(double)c/a;
	v[3] = (double)b/a+(double)d/c;
	double max = 0;
	int index =0;
	for(int i =0;i<4;i++){
		if(v[i]>max){
			max = v[i];
			index = i;
		}
	}
	cout << index;
	return 0;
}
