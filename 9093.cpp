/*
 * 9093.cpp
 *
 *  Created on: 2018. 11. 19.
 *      Author: paul
 */
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <sstream>
using namespace std;
//�ٽ� �����غ���
int main() {
	int n;
	cin >> n;
	cin.ignore();//getline���� ���� ���鹮�ڸ� �޾ƹ��� ignore�� ���� �����
	vector<string> v;
	for (int i = 0; i < n; i++) {
		string tmp;
		getline(cin, tmp);
		stringstream stream1;
		stream1.str(tmp);
		string tmp2;
		while (stream1 >> tmp2){
			reverse(tmp2.begin(), tmp2.end());
			v.push_back(tmp2);
		}

		for (auto str : v) {

			cout << str << " ";
		}
		cout <<endl;
		v.clear();
	}
	return 0;
}

