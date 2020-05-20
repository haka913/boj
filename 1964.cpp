#include <iostream>
#include <cmath>

using namespace std;

int main() {
	long long n;
	cin >> n;
	long long result = 4*(n-1)+(3*n*(n-1))/2+5;
	result = result%45678;
	cout << result << endl;
}

