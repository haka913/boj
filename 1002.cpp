/*
 * 1002.cpp
 *
 *  Created on: 2018. 11. 28.
 *      Author: paul
 */
#include <iostream>
#include <cmath>
using namespace std;
//d<r1-r2<=d<=r1+r2<d
//좌표가 같을 때 반지름 같으면 무한대
// ''	''	반지름 다르면 0

//두 좌표 다른 경우
//d < r1 - r2 or r1 + r2 < d : 0개
//r1 - r2 = d or d = r1 + r2 : 1개
//r1 - r2 < d < r1 + r2 : 2개

int main(){
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	int t;
	cin >> t;
	int x1,y1,r1,x2,y2,r2;
	double dis;
	for(int i = 0 ; i < t;i++){
		cin >>x1>>y1>>r1>>x2>>y2>>r2;
		dis = sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
		if(x1==x2 &&y1==y2 && r1==r2){
			cout <<"-1\n";
		}
		else if(r1+r2==dis || r1+dis==r2||r2+dis==r1){
			cout <<"1\n";
		}
		else if(r1+r2<dis||r1+dis<r2||r2+dis<r1){
			cout <<"0\n";
		}
		else{
			cout <<"2\n";
		}
	}
	return 0;
}



