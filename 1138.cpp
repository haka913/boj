/*
 * 1138.cpp
 *
 *  Created on: 2019. 2. 15.
 *      Author: paul
 */
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
//1. 인덱스 번호대로 키가 부여되므로 이미 정렬되어 있는 상태입니다.
//2. 왼쪽에 자신보다 키 큰 사람의 수를 입력받습니다.
//3. 자기보다 키 큰 사람이 있는 경우 빈 자리를 지나칩니다.
//4. 빈 자리이고 2번에서 입력받은 수만큼 키 큰 사람을 지나쳤다면 자신의 자리입니다.
int a[11];
int main(){
	int n;
	cin >> n;
	vector<int> v;
	for(int i = 1 ; i <=n;i++){
		cin >> a[i];
	}
	v.push_back(n);
	for(int i =n-1;i>=1;i--){
		v.insert(v.begin()+a[i],i);
	}
	for(int a:v){
		cout <<a << " ";
	}

	return 0;
}



