/*
 * 10163.cpp
 *
 *  Created on: 2018. 11. 3.
 *      Author: paulk
 */
#include <iostream>

using namespace std;

int main(){
	int cp[102][102]={0};
	int cnt[102];
	int N;
	cin >> N;
	for(int i = 1; i <=N;i++){
		int x,y,width,height;
		cin >> x >> y >> width >> height;
		for(int j = x; j< x+width;j++){
			for(int k =y;k<y+height;k++){
				cp[j][k] = i;
			}
		}
	}

	for(int i = 0 ; i <=100;i++){
		for(int j =0 ; j <=100;j++){
			cnt[cp[i][j]]++;
		}
	}
	for(int i = 1;i<=N;i++){
		cout << cnt[i] <<"\n";
	}
	return 0;
}



