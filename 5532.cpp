/*
 * 5532.cpp
 *
 *  Created on: 2018. 12. 19.
 *      Author: paulk
 */
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int L,a,b,c,d;
	cin >>L>>a>>b>>c>>d;
	int kor = a/c;
	if(a%c!=0) kor+=1;
	int math = b/d;
	if(b%d!=0) math+=1;
	cout << L-max(kor,math);
	return 0;
}



