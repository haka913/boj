/*
 * 2858.cpp
 *
 *  Created on: 2019. 2. 18.
 *      Author: paul
 */
#include <iostream>
#include <algorithm>

using namespace std;

// 2L+2W-4=R
//LW=B+R
//LW-(2L+2W-4)=B
//(L-2)(W-2)=B
//L=(B+R)/W
int main() {
	int R, B;
	cin >> R >> B;

	int RB = R + B;
//	for(int i =3;i<=RB/3;i++){
//		if(RB%i==0){
//			L = RB/i;
//			W = i;
//
//			if((L-2)*(W-2)==B){
//				break;
//			}
//		}
//	}
//	cout << L << " " << W << endl;
	for (int w = 1;; w++) {
		if ((R + B) % w == 0) {
			int l = (R + B) / w;
			if(l+w-2 == R/2){
				cout << l << " " << w;
				break;
			}
		}
	}


	return 0;
}

