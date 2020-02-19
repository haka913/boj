/*
 * 2935.cpp
 *
 *  Created on: 2019. 2. 10.
 *      Author: paul
 */
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

void print(int cnt){
	for(int i = 0 ; i < cnt;i++){
		cout <<"0";
	}
}

int main(){
	string a,b;
	char op;
	cin >> a>>op>>b;
	if(op=='+'){
		if(a.size()==b.size()){
			cout <<"2";
			print(a.size()-1);
		}else{
			cout <<"1";
			int maxCnt = max(a.size()-1,b.size()-1);
			int minCnt = min(a.size()-1,b.size()-1);
			print(maxCnt-minCnt-1);
			cout <<"1";
			print(minCnt);
		}

	}
	if(op=='*'){
		cout <<"1";
		print(a.size()-1+b.size()-1);
	}


	return 0;
}



