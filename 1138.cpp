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
//1. �ε��� ��ȣ��� Ű�� �ο��ǹǷ� �̹� ���ĵǾ� �ִ� �����Դϴ�.
//2. ���ʿ� �ڽź��� Ű ū ����� ���� �Է¹޽��ϴ�.
//3. �ڱ⺸�� Ű ū ����� �ִ� ��� �� �ڸ��� ����Ĩ�ϴ�.
//4. �� �ڸ��̰� 2������ �Է¹��� ����ŭ Ű ū ����� �����ƴٸ� �ڽ��� �ڸ��Դϴ�.
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



