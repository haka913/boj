/*
 * 1614.cpp
 *
 *  Created on: 2019. 2. 19.
 *      Author: paul
 */
#include <iostream>
#include <algorithm>

using namespace std;
// n,m이면
//엄지 8*m
//새끼 8*m+4
//나머지 4*m+1 + (m이 홀수이면 4-n 짝수이면 n-2)

int main() {
	long long hurt, limitCnt;
	cin >> hurt >> limitCnt;
	long long result =0;

	switch(hurt){
	case 1:
		result = 8*limitCnt;
		break;
	case 2:
		result =  (limitCnt/2)*8 + 1 + (limitCnt%2)*6;
		break;
	case 3:
		result = (limitCnt/2)*8 + 2 + (limitCnt%2)*4;
		break;
	case 4:
		result = (limitCnt/2)*8 + 3 + (limitCnt%2)*2;
		break;
	case 5:
		result = 8*limitCnt+4;
		break;
	}

	cout << result;
//	int cnt[6]={0,};
//	int hurtCnt = 0;
//	int i = 1;
//	//sw=0 1->5
//	//sw=1 5->1
//	int sw = 0;
//	if (hurt == 1 && limitCnt == 0) {
//		cout << 0;
//		return 0;
//	}
//	while (hurtCnt <= limitCnt) {
//		if(sw==0){
//			if(i==hurt) hurtCnt++;
//			if(i==5){
//				cnt[i]++;
//				sw=1;
//				i--;
//			}else{
//				cnt[i]++;
//				i++;
//			}
//		}
//		else{
//			if(i==hurt) hurtCnt++;
//			if(i==1){
//				cnt[i]++;
//				sw=0;
//				i++;
//			}else{
//				cnt[i]++;
//				i--;
//			}
//
//		}
//	}
//	int result =0;
//	for(int i =1;i<=5;i++){
//		result += cnt[i];
//	}
//	cout << result-1;
	return 0;
}

