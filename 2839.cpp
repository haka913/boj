#include <iostream>
#include <cmath>

using namespace std;

int solution(int n){
	if(n<3) return -1;
	int s5 = n/5;
	while(s5>=0){
		int s3 = n-(5*s5);
		if(s3%3==0){
			return s5+s3/3;
		}
		s5--;
	}
	return -1;

}
int main() {
	int n;
	cin >> n;
	int result = solution(n);

	cout << result << endl;

}

