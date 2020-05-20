/*
 * 1793.cpp
 *
 *  Created on: 2019. 2. 8.
 *      Author: paulk
 */
#include <iostream>
#include <algorithm>
#include <string>

using namespace std;
string dp[255] = { "1", "1" };
string tilingg(string a, string b) {
	int sum = 0;
	string result;
	while (!a.empty() || !b.empty() || sum) {
		if (!a.empty())
			sum += a.back() - '0', a.pop_back();
		if (!b.empty())
			sum += b.back() - '0', b.pop_back();
		result.push_back((sum % 10) + '0');
		sum /= 10;
	}
	reverse(result.begin(), result.end());
	return result;
}
int main() {
	int n;
	for (int i = 2; i <= 250; i++) {
		dp[i] = tilingg(tilingg(dp[i - 2], dp[i - 2]),dp[i-1]);
	}
	while (cin >> n) {
		cout << dp[n] << "\n";
	}
	return 0;
}

