/*
 * 10569.cpp
 *
 *  Created on: 2018. 2. 22.
 *      Author: paul
 */
#include <iostream>
using namespace std;

int main(){
	int T;
	cin >> T;
	for(int i = 0 ; i < T;i++){
		int V, E;
		cin >> V >> E;
		int face = 2 - V + E;
		cout << face<<endl;
	}
}
