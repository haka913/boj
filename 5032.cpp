/*
 * 5032.cpp
 *
 *  Created on: 2018. 2. 24.
 *      Author: paul
 */
#include <iostream>

using namespace std;

int main(){
	int e,f,c;
	cin >>e>>f>>c;
	e +=f;
	int result = 0;
	while(e>=c){
		result +=e/c;
		e = e/c + e%c;
	}
	cout << result << endl;

}



