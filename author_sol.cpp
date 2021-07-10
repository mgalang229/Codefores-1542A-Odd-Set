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
		vector<int> even_counter(2, 0);
		for (int i = 0; i < 2 * n; i++) {
			int x;
			cin >> x;
			// count the frequency of even numbers
			even_counter[x % 2]++;
		}
		// check if the frequence of even numbers is EXACTLY equal to 'n'
		cout << (even_counter[0] == n ? "Yes" : "No") << '\n';
	}
	return 0;
}
