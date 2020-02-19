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
//개같은 floating point 오차 1e-9
//아래 설명
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
//간혹가다 error를 출력하는 경우가 있습니다. 다음과 같은 경우에는
//이유는 a가 0.99999999999999 이거나 a가 1.00000000000000000001일 때
//컴퓨터는 다르게 보기 때문입니다.
//
//c언어에서 floating point 연산으로 소수를 표현하기 때문에
//(http://en.wikipedia.org/wiki/Floating_point)
//위와 같은 오차가 발생하게 됩니다.
//
//따라서
//
//double a = 1.0
//
//if( fabs( a - 1.0 )  <= ERROR  )
//   printf("not error");
//else
//   printf("error");
//
//로 처리합니다.

