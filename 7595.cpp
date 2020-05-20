/*
 * 7595.cpp
 *
 *  Created on: 2018. 12. 11.
 *      Author: paulk
 */
#include <iostream>

using namespace std;

void draw(int n){
	for(int i = 1 ; i <= n; i++){
		for(int j = 1; j<=i;j++){
			cout <<"*";
		}
		cout <<"\n";
	}
}
int main(){
	while(true){
		int n;
		cin >> n;
		if(n==0) break;
		else draw(n);
	}
	return 0;
}



