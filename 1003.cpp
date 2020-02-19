/*
 * 1003.cpp
 *
 *  Created on: 2018. 2. 25.
 *      Author: paulk
 */
#include <iostream>
using namespace std;
int zero, one;
int fibo(int n){
	if(n==0){
		zero++;
		return 0;
	}else if(n==1){
		one++;
		return 1;
	}else{
		return fibo(n-1)+fibo(n-2);
	}
}
int main(){
	int T;
	cin >> T;
	for(int i = 0 ; i < T;i++){
		zero = 0 , one = 0;
		int tmp;
		cin >> tmp;
		fibo(tmp);
		cout << zero << " " << one << endl;
	}
}



