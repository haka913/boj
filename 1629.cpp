/*
 * 1629.cpp
 *
 *  Created on: 2018. 11. 25.
 *      Author: paulk
 */
#include <iostream>

using namespace std;
long long pow(long long x,long long n,long long c){
	long long result = 1;
	while(n>0){
		if(n%2==1){
			result *=x;
			result %=c;
		}
		x*=(x%c);
		x%=c;
		n/=2;
	}

	return result%c;
}
int main(){
	long long a,b,c;
	cin >>a>>b>>c;

	cout << pow(a,b,c);
	return 0;
}



//int f(int x, int n) { // x^n�� ��ȯ
//
//    if(n==0) return 1;
//
//    if(n%2==1) return x*f(x,n-1); // n�� Ȧ���� ��
//    else { // n�� ¦���� ��
//        int half=f(x,n/2);
//        return half*half; // x^(n/2)�� ������ ��ȯ
//    }
//}


//python2
//a,b,c=map(int,raw_input().split())
//print pow(a,b,c)
