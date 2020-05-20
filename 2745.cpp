/*
 * 2745.cpp
 *
 *  Created on: 2018. 11. 28.
 *      Author: paulk
 */
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(){
	string n;
	int b;
	cin >> n>> b;

	int result = 0;
	int powindex=0;
	for(int i = n.size()-1;i>=0;i--){
		int tmp;
		if(n[i]>='0' and n[i]<='9'){
			tmp = n[i]-'0';
		}
		else{
			tmp=n[i]-'A'+10;
		}
		result +=tmp*pow(b,powindex++);
	}
	cout << result;
	return 0;
}



