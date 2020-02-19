/*
 * 2953.cpp
 *
 *  Created on: 2018. 11. 30.
 *      Author: paulk
 */
#include <iostream>

using namespace std;

int main(){
	int people=0;
	int score;
	int maxscore=0;
	for(int i = 1 ; i <=5;i++){
		int total=0;
		for(int j = 0;j<4;j++){
			cin >>score;
			total+=score;
		}
		if(total>maxscore){
			maxscore = total;
			people = i;
		}
	}

	cout <<people << " " << maxscore;
}



