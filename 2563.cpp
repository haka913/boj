/*
 * 2563.cpp
 *
 *  Created on: 2018. 12. 16.
 *      Author: paulk
 */
#include <iostream>

using namespace std;

int main(){
	int n;
	bool paper[100][100]={false};
	cin >> n;
	int x,y;
	int result =0;
	while(n--){
		cin >>x>>y;
		for(int i=0;i<10;i++){
			for(int j=0;j<10;j++){
				if(!paper[y+i][x+j]) result++;
				paper[y+i][x+j]=1;
			}
		}
	}

	cout << result;
	return 0;
}



