/*
 * 1074.cpp
 *
 *  Created on: 2019. 2. 4.
 *      Author: paulk
 */
#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int z(int n,int x,int y){
	if(n==1){
		return 2*x+y;
	}else{
		if(x<pow(2,n-1)){
			//0
			if(y<pow(2,n-1)){
				return z(n-1,x,y);
			}
			//1
			else{
				return z(n-1,x,y-pow(2,n-1))+pow(2,2*n-2);
			}
		}else{
			//2
			if(y<pow(2,n-1)){
				return z(n-1,x-pow(2,n-1),y)+pow(2,2*n-2)*2;
			}
			//3
			else{
				return z(n-1,x-pow(2,n-1),y-pow(2,n-1))+pow(2,2*n-2)*3;
			}
		}
	}
	return 0;
}

int main(){
	int N,r,c;
	cin >>N>>r>>c;
	cout << z(N,r,c);
	return 0;
}



