
#include <iostream>
#include <cmath>

using namespace std;

int main(){
	int n;
	cin >> n;
	while(true){
		int t;
		cin >>t;
		if(t ==0){
			break;
		}

		if(t%n==0){
			cout << t << " is a multiple of " << n <<"."<< endl;
		}
		else{
			cout << t << " is NOT a multiple of " << n << "."<< endl;
		}
	}
}



