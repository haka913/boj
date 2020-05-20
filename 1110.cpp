/*
 * 1110.cpp
 *
 *  Created on: 2018. 2. 25.
 *      Author: paulk
 */
#include <iostream>
using namespace std;

int main(){
	int n;
	cin >>n;
	int count =1;
	int chk = n;

	while(true){
		int a = n/10;
		int b = n%10;
		int c= a+b;
		n = b*10+c%10;
		if(n == chk) break;
		else count++;
	}
	cout << count << endl;
}



