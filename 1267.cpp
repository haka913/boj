/*
 * 1267.cpp
 *
 *  Created on: 2019. 2. 18.
 *      Author: paul
 */
#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	int n;
	cin >> n;
	int bill[21]={0};
	int ybill=0;
	int mbill=0;
	for(int i = 0 ; i < n;i++){
		cin >> bill[i];
	}

	for(int i = 0 ; i < n;i++){
		ybill += ((bill[i]/30)+1)*10;
		mbill += ((bill[i]/60)+1)*15;
	}
	if(ybill >mbill){
		cout << "M " << mbill;
	}else if(ybill<mbill){
		cout <<"Y "<< ybill;
	}
	else{
		cout <<"Y M "<<ybill;
	}
	return 0;
}



