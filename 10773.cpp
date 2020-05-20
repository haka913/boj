/*
 * 10773.cpp
 *
 *  Created on: 2019. 3. 1.
 *      Author: paul
 */
#include <iostream>
#include <stack>
#include <algorithm>

using namespace std;

int main(){
	int k;
	cin >> k;
	stack<int> s;
	int temp;
	for(int i = 0 ; i < k;i++){
		cin >> temp;
		if(temp==0){
			s.pop();
		}else{
			s.push(temp);
		}
	}
	long long result=0;
	while(!s.empty()){
		result += s.top();
		s.pop();
	}
	cout << result;
	return 0;
}



