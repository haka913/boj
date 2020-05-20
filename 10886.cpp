/*
 * 10886.cpp
 *
 *  Created on: 2018. 2. 25.
 *      Author: paul
 */
#include <iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	int cute= 0;
	int notcute= 0;
	for(int i = 0 ; i <n;i++){
		int tmp;
		cin >> tmp;
		if(tmp == 0){
			notcute++;
		}else if(tmp ==1){
			cute ++;
		}
	}
	if(cute > notcute){
		cout << "Junhee is cute!" << endl;
	} else{
		cout <<"Junhee is not cute!" << endl;
	}
}



