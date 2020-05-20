/*
 * 1158.cpp
 *
 *  Created on: 2018. 11. 23.
 *      Author: paulk
 */
#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n, m;
	vector<int> inp;
	vector<int> result;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		inp.push_back(i + 1);
	}
	int index = 0;
	while (inp.size() != 0) {
		index = (index + m - 1) % inp.size();
		result.push_back(inp[index]);
		inp.erase(inp.begin() + index);
	}
	cout <<"<";
	for (vector<int>:: iterator it = result.begin(); it!=result.end();it++) {
		if(it==result.end()-1){
			cout << *it;
		}
		else{
			cout << *it << ", ";
		}
	}
	cout <<">";
	return 0;
}
//int main() {
//	int n, m;
//	vector<int> v;
//	cin >> n >> m;
//	for (int i = 0; i < n; i++) {
//		v.push_back(i + 1);
//	}
//	int index =0;
//	cout << "<";
//	while(v.size()>1){
//		index +=m-1;
//		index%=v.size();
//		cout << v[index] <<", ";
//		v.erase(v.begin()+index);
//	}
//	cout << v[0] <<">";
//
//	return 0;
//}


