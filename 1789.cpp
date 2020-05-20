/*
 * 1789.cpp
 *
 *  Created on: 2018. 2. 21.
 *      Author: paulk
 */
#include <iostream>
using namespace std;

long long i, n, sum;
int main()
{
	cin >> n;

	for (i = 1;; i++)
	{
		sum += i;
		if (sum > n)
		{
			i--;
			break;
		}
	}
	cout << i;
}



