/*
 * 10828.cpp
 *
 *  Created on: 2018. 12. 6.
 *      Author: paul
 */
#include <iostream>
#include <stack>

using namespace std;

int main(){
	int n;
	cin >> n;
	stack<int> stac;
	int a;
	for(int i = 0 ; i < n;i++){
		string s;
		cin >>s;
		if(s=="push"){
			cin >> a;
			stac.push(a);
		}
		else if(s=="pop"){
			if(stac.empty()) cout << "-1\n";
			else{ cout << stac.top()<<"\n"; stac.pop();}
		}
		else if(s=="size"){
			cout << stac.size()<<"\n";
		}
		else if(s=="empty"){
			cout << stac.empty() <<"\n";
		}
		else if(s=="top"){
			if(stac.empty()) cout << "-1\n";
			else cout << stac.top()<<"\n";
		}
	}
	return 0;
}



