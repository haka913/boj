/*
 * 1476.cpp
 *
 *  Created on: 2019. 2. 17.
 *      Author: paul
 */
#include <iostream>

using namespace std;
/*
28*19*s1 % 15 == 1
15*19*s2 % 28 == 1
15*28*s3 % 19 == 1
s1 == 13, s2 == 17, s3 == 10

ans = (E*28*19*13 + S*15*19*17 + M*15*28*10)%(15*28*19)
    = (E*6916 + S*4845 + M*4200) % 7980
*/
int main(){
	int E,S,M;
	cin >> E>>S>>M;
	int x = (E*6916+S*4845+M*4200)%7980;
	if(x==0){
		cout << 7980;
	}
	else{
		cout << x;
	}
	return 0;
}



