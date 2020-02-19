/*
 * 6986.cpp
 *
 *  Created on: 2018. 12. 17.
 *      Author: paulk
 */
#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>
using namespace std;
//������ floating point ���� 1e-9
//�Ʒ� ����
double avg(vector<double> v){
	double sum =0;
	for(int i = 0 ;i <v.size();i++){
		sum+=v[i];
	}
	return sum/v.size();
}
int main() {
	int n, k;
	cin >> n >> k;
	vector<double> v(n);
	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}
	sort(v.begin(), v.end());

	vector<double> a;
	vector<double> b;
	for (int i = k; i < n - k; i++) {
		a.push_back(v[i]);
	}
	for (int i = k; i < n - k; i++) {
		b.push_back(v[i]);
	}
	for(int i = 0 ; i < k;i++){
		b.push_back(v[k]);
		b.push_back(v[n-k-1]);
	}
	printf("%.2lf\n",avg(a)+ 1e-9);
	printf("%.2lf\n",avg(b)+ 1e-9);
	return 0;
}

//double a = 1.0
//
//if( a ==  1.0 )
//   printf("not error");
//else
//   printf("error");
//
//��Ȥ���� error�� ����ϴ� ��찡 �ֽ��ϴ�. ������ ���� ��쿡��
//������ a�� 0.99999999999999 �̰ų� a�� 1.00000000000000000001�� ��
//��ǻ�ʹ� �ٸ��� ���� �����Դϴ�.
//
//c���� floating point �������� �Ҽ��� ǥ���ϱ� ������
//(http://en.wikipedia.org/wiki/Floating_point)
//���� ���� ������ �߻��ϰ� �˴ϴ�.
//
//����
//
//double a = 1.0
//
//if( fabs( a - 1.0 )  <= ERROR  )
//   printf("not error");
//else
//   printf("error");
//
//�� ó���մϴ�.

