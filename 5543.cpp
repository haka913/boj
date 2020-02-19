/*
 * 5543.cpp
 *
 *  Created on: 2018. 12. 10.
 *      Author: paul
 */
#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	int a,b,c;
	int aa,bb;
	cin >>a>>b>>c;
	cin >>aa>>bb;
	int minbug =min(a,b);
	minbug = min(minbug, c);
	int mincoke = min(aa,bb);
	cout << minbug+mincoke-50;
	return 0;
}



