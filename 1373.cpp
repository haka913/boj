/*
 * 1373.cpp
 *
 *  Created on: 2018. 11. 29.
 *      Author: paulk
 */
#include <iostream>
#include <string>
using namespace std;

int main(){
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	string s;
	cin >>s;
	while(s.size()%3!=0){
		s.insert(0,"0");
	}
	string result="";
	for(int i = 0 ; i < s.size();i+=3){
		int sum =0;
		sum+=((int)s.at(i)-48)*4;
		sum+=((int)s.at(i+1)-48)*2;
		sum+=((int)s.at(i+2)-48);
		result.append(to_string(sum));
	}
	cout << result;
	return 0;
}

//string oct[8] = {"000","001","010","011","100","101","110","111"};
//string temp;
//	while(s.size()!=0){
//		temp = s.substr(0,3);
//		for(int i = 0 ;i <8;i++){
//			if(oct[i].compare(temp)==0) result+=to_string(i);
//		}
////		cout << temp<<endl;
//		s.erase(0,3);
//	}
