/*
 * p146right_truncatable_prime.cpp
 *
 *  Created on: 2019. 2. 13.
 *      Author: paul
 */
#include <iostream>

using namespace std;

int n, cnt;

bool isPrimte(int x){
	if(x<2) return false;
	for(int i = 2;i*i<=x;i++){
		if(x%i==0) return false;
	}
	return true;
}

void f(int num, int len){
//	if(len==n){
//		if(num==0) return;
//
//		int flag =1;
//		int temp = num;
//		while(temp){
//			if(!isPrimte(temp)){
//				return;
//			}
//			temp/=10;
//		}
//		cnt++;
//		cout << num<<"\n";
//	}else{
//		for(int i = 1;i<=9;i++){
//			f(num*10+i,len+1);
//		}
//	}
	if(len==n){
		if(isPrimte(num)){
			cnt++;
			cout << num<<"\n";
		}
		return ;
	}
	else{
		if(isPrimte(num)){
			f(num*10+1,len+1);
			f(num*10+3,len+1);
			f(num*10+7,len+1);
			f(num*10+9,len+1);
		}
	}
}

int main(){
	cin >> n;
	f(2,1);f(3,1);f(5,1);f(7,1);
	cout << cnt;
	return 0;
}



