#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int n,f;
	cin >> n >> f;
	n/=100;
	n*=100;
	while(n%f !=0){
		n++;
	}
	n%=100;
	if(n<10){
		cout <<"0"<<n<<endl;
	}
	else{
		cout << n << endl;
	}
}

