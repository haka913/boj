/*
 * 2565.cpp
 *
 *  Created on: 2019. 2. 16.
 *      Author: paul
 */
#include <iostream>
#include <algorithm>
#include <utility>
#include <vector>

using namespace std;


int n;
//pair<int,int> wire[100];
vector<pair<int,int>> v;

int lis(){
	vector<int> L = vector<int>(n+1,1000);
	for(int i = 0 ;i<n;i++){
		int idx = lower_bound(L.begin(),L.end(), v[i].second)-L.begin();
		L[idx] = v[i].second;
//		cout << "idx: " << idx << " " <<"L:" << L[idx]  << " " << i<< endl;
//		cout << "L is" << endl;
//		for(auto i : L){
//			cout << i << " ";
//		}
//		cout << endl<<endl;
	}
//	for(int i = 0;i<n;i++){
//		cout << L[i]<<" ";
//	}
//	cout << endl;
	return lower_bound(L.begin(),L.end(),1000)-L.begin();
}

int main(){
	cin >> n;
	for(int i =0;i<n;i++){
		int a,b;
		cin >> a>>b;
		v.push_back(make_pair(a,b));
	}
	sort(v.begin(),v.end());
	cout << n-lis();
	return 0;
}

	//dp
//int edge[501];
//int dp[501];
//
//int main() {
//    int n;
//    cin >> n;
//
//    for (int i = 0; i < n; i++) {
//        int a, b;
//        cin >> a >> b;
//
//        edge[a] = b;
//    }
//
//    int ret = 0;
//
//    for (int i = 1; i <= 500; i++) {
//        if (edge[i] == 0) continue;
//
//        dp[i] = 1;
//
//        for (int j = 1; j < i; j++) {
//            if (edge[j] < edge[i]) {
//                dp[i] = max(dp[i], dp[j] + 1);
//            }
//        }
//
//        ret = max(ret, dp[i]);
//    }
//
//    cout << n - ret;
//
//    return 0;
//}



