#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n;
		cin >> n;
		int even = 0;
		for (int i = 0; i < 2 * n; i++) {
			int a;
			cin >> a;
			// count the frequency of even numbers
			if (a % 2 == 0) {
				even++;
			}
		}
		// compute the number of odd numbers
		int odd = (2 * n) - even;
		// check if the occurrences of even numbers is equal to the occurrences of odd numbers
		cout << (even == odd ? "Yes" : "No") << '\n';
	}
	return 0;
}
