/*
 * 11660.cpp
 *
 *  Created on: 2019. 2. 6.
 *      Author: paul
 */
#include <iostream>
#include <cstring>

using namespace std;
//elcipse에서는 에러?
//ubuntu linux에서는 정상 작동

//main안에서 안되면 전역변수로
//int arr[1025][1025];

int main() {
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int n, m;
	cin >> n >> m;

	int arr[1025][1025]={0};
	memset(arr,0,sizeof(arr[0][0])*1025*1025);

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			cin >> arr[i][j];
			arr[i][j]+=arr[i][j-1]+arr[i-1][j]-arr[i-1][j-1];
		}
	}
	int x1, y1, x2, y2;
	int result;
	while (m--) {
		cin >> x1 >> y1 >> x2 >> y2;
		result = arr[x2][y2]-arr[x2][y1-1]-arr[x1-1][y2]+arr[x1-1][y1-1];
		cout << result<<"\n";
	}
	return 0;
}

