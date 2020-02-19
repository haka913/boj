/*
 * 1919.cpp
 *
 *  Created on: 2018. 12. 10.
 *      Author: paul
 */
#include <iostream>
#include <string>
#include <cstdlib>
#include <cmath>
using namespace std;

int main(){
	string s1;
	string s2;
	int arr1['z'+1]={0},arr2['z'+1]={0};
	cin >> s1>>s2;

	for(int i = 0 ; i < s1.size();i++) arr1[s1[i]]++;
	for(int i = 0 ; i < s2.size();i++) arr2[s2[i]]++;

	int result = 0;
	for(int i = 'a';i<='z';i++){
		result += abs(arr1[i]-arr2[i]);
	}
	cout <<result;
	return 0;
}



