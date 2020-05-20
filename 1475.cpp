/*
 * 1475.cpp
 *
 *  Created on: 2019. 2. 6.
 *      Author: paulk
 */
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
	string n;
	cin >> n;
	int num[10]={0};
	for(int i = 0 ; i < n.length();i++){
		num[n.at(i)-'0']++;
//		num[n[i]-'0']++;
	}
//	for(int i = 0 ; i < 10;i++){
//		cout << num[i] <<" " ;
//	}
	int result=0;
	for(int i =0;i<10;i++){
		if(i!=6 && i!=9){
			result = max(result,num[i]);
		}
	}
	result = max(result,(num[6]+num[9]+1)/2);
	cout <<result;
	return 0;
}



