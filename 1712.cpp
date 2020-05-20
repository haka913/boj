/*
 * 1712.cpp
 *
 *  Created on: 2018. 12. 23.
 *      Author: paulk
 */
#include <iostream>

using namespace std;
// a+bx<cx
// a/(c-b)<x
int main(){
	int a,b,c;
	cin >>a>>b>>c;
	if(c-b <=0) cout <<-1<<"\n";
	else cout <<a/(c-b)+1 << "\n";
	return 0;
}



