/*
 * 16455.cpp
 *
 *  Created on: 2018. 11. 30.
 *      Author: paulk
 */
#include <vector>
#include <algorithm>
using namespace std;
int kth(vector<int> &a, int k){
	nth_element(a.begin(),a.begin()+k-1,a.end());
	return a[k-1];
}
