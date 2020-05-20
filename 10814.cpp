/*
 * 10814.cpp
 *
 *  Created on: 2019. 2. 9.
 *      Author: paul
 */
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <tuple>
using namespace std;

bool cmp(tuple<int,string,int> a,tuple<int,string,int> b){
	if(get<0>(a)==get<0>(b)){
		return get<2>(a)<get<2>(b);
	}else{
		return get<0>(a)<get<0>(b);
	}
}

int main(){
	int n;
	cin >> n;
//	vector<pair<pair<int,string>,int>>v;
	vector<tuple<int,string,int>> v;
	// age, name, entry
	int age;
	string name;
	for(int i = 0 ; i < n;i++){
		cin >>age>>name;
//		v.push_back(make_pair(make_pair(age,name),i));
		v.push_back(make_tuple(age,name,i));
	}
//	sort(v.begin(),v.end());
//	for(int i = 0 ; i < n;i++){
//		cout << get<0>(v[i]) <<" " <<get<1>(v[i]) <<" "<<get<2>(v[i])<<"\n";
//	}
	sort(v.begin(),v.end(),cmp);
	for(int i = 0 ; i < n;i++){
		cout << get<0>(v[i]) <<" " <<get<1>(v[i]) <<"\n";
	}
	return 0;
}


//이름 담는 vector만들어서(배열의 크기는 나이, 인덱스는 해당 나이에 있는 사람이름을 넣는다)

//#include <iostream>
//#include <string>
//#include <vector>
//using namespace std;
//
//int main()
//{
//	ios::sync_with_stdio(false);
//
//	int n;
//	cin >> n;
//
//	int age;
//	string name;
//	vector<string> names[201];
//	for (int i = 0; i < n; ++i)
//	{
//		cin >> age;
//		cin >> name;
//
//		names[age].push_back(name);
//	}
//
//	for (int i = 1; i <= 200; ++i)
//		for (int j = 0; j < names[i].size(); ++j)
//			cout << i << ' ' << names[i].at(j) << '\n';
//
//	return 0;
//}

