#include <iostream>
#include <cmath>

using namespace std;
string s[] = { "black", "brown", "red", "orange", "yellow", "green", "blue",
		"violet", "grey", "white" };
int main() {
	string a, b, c;
	cin >> a >> b >> c;
	long long total = 0;
	long long mul = 1;
	for (int i = 0; i < 10; i++) {
		if (a == s[i]) {
			total += i * 10;
		}
		if (b == s[i]) {
			total += i;
		}
		if(c==s[i]){
			mul = ceil(pow(10,i));
		}
	}

	cout << total* mul;
}

