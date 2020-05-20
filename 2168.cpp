/*
 * 2168.cpp
 *
 *  Created on: 2018. 12. 11.
 *      Author: paul
 */
#include <iostream>
#include <algorithm>
using namespace std;

//int gcdd(int a,int b){
//	if(!b) return a;
//	else return gcdd(b,a%b);
//}

int main(){
	int x,y;
	cin >>x>>y;
	cout << x+y-__gcd(x,y);
	return 0;
}



