/*
 * 11726.cpp
 *
 *  Created on: 2018. 11. 8.
 *      Author: paulk
 */
#include <iostream>

using namespace std;

int tiles(int n){
	static int tile[1001];
	tile[1]=1, tile[2]=2;
	if(tile[n]) return tile[n];
	return tile[n] = (tiles(n-1)+tiles(n-2))%10007;
}

int main(){
	int n;
	cin >> n;
	cout << tiles(n);
	return 0;
}



