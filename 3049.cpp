/*
 * 3049.cpp
 *
 *  Created on: 2019. 2. 14.
 *      Author: paulk
 */
#include <iostream>

using namespace std;
//대각선 교차점 하나가 생기려면 대각선 두 개가 필요하고 대각선은 꼭지점 2개로
//이뤄지기 때문에 총 4개의 꼭지점의 조합이 필요하다.
//즉, n개의 꼭지점 개수 중에서 4개를 순서 없이 선택하면 된다.
//nC4

int main(){
	int n;
	cin>>n;
	cout << n*(n-1)*(n-2)*(n-3)/24;
	return 0;
}



