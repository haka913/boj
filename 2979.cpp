/*
 * 2979.cpp
 *
 *  Created on: 2018. 12. 11.
 *      Author: paulk
 */
#include <iostream>

using namespace std;

int main() {
	int a, b, c;
	cin >> a >> b >> c;
	int truck[101]={0,};
	for (int i = 0; i < 3; i++) {
		int d,e;
		cin >>d>>e;
		for(int j = d; j<e;j++){
			truck[j]++;
		}
	}
	int result = 0;
	for(int i = 1;i<=100;i++){
		if(truck[i]==1){
			result +=a;
		}
		else if(truck[i]==2){
			result +=b*2;
		}
		else if(truck[i]==3){
			result +=c*3;
		}
	}
	cout << result;
	return 0;
}
