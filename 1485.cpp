/*
 * 1485.cpp
 *
 *  Created on: 2019. 2. 19.
 *      Author: paul
 */
#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

pair<int, int> p[4];

int main() {
	int t;
	cin >> t;
	while (t--) {
		for (int i = 0; i < 4; i++) {
			cin >> p[i].first >> p[i].second;
		}
		sort(p, p + 4);
		int a, b, c, d;
		a = pow(p[1].first - p[0].first, 2) + pow(p[1].second - p[0].second, 2);
		b = pow(p[2].first - p[0].first, 2) + pow(p[2].second - p[0].second, 2);
		c = pow(p[3].first - p[1].first, 2) + pow(p[3].second - p[1].second, 2);
		d = pow(p[3].first - p[2].first, 2) + pow(p[3].second - p[2].second, 2);

		if (a == b and a == c and a == d) { // 네 변의 길이 같음(마름모 조건)
			int diag_a, diag_b;

			diag_a = pow(p[3].first - p[0].first, 2)+ pow(p[3].second - p[0].second, 2);
			diag_b = pow(p[2].first - p[1].first, 2)+ pow(p[2].second - p[1].second, 2);
			//네 각의 크기 같음 = 두 대각선의 길이 같음(직사각형 조건)
			if(diag_a == diag_b) cout << "1\n";
			else cout << "0\n";
		}
		else{
			cout << "0\n";
		}
	}
}


//while (t--)
//	{
//		for (i=0;i<4;i++)
//			scanf ("%lld%lld",x+i,y+i);
//		for (k=i=0;i<4;i++)
//			for (j=i+1;j<4;j++)
//				s[k++]=(x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j]);
//		std::sort (s,s+6);
//		printf ("%d\n",s[0]==s[3]&&s[4]==s[5]);
//	}


