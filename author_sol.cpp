#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n, k;
		cin >> n >> k;
		if (n < k) {
			// if 'n' is STRICLY less than 'k', then print their difference
			cout << k - n;
		} else {
			// otherwise, if the parity of 'n' and 'k' are the same, then print 0
			// and 1 if not
			cout << (n % 2 == k % 2 ? 0 : 1);
		}
		cout << '\n';
	}
	return 0;
}
