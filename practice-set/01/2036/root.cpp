#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;
#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

typedef long long ll;

void solve()
{
	int n; cin >> n;
	ll seq[100005];
	for (int i = 0; i < n; i++) {
		cin >> seq[i];
	}

	sort(seq, seq + n);

	ll point_sum = 0;

	int negative_idx = 0;
	while (negative_idx < n && seq[negative_idx] < 0) {
		if (n <= negative_idx + 1) {
			point_sum += seq[negative_idx];
			break;
		}

		if (seq[negative_idx + 1] < 0) {
			point_sum += seq[negative_idx] * seq[negative_idx + 1];
			negative_idx += 2;
			continue;
		} else if (seq[negative_idx + 1] == 0) {
			break;
		} else {
			point_sum += seq[negative_idx];
			break;
		}
	}

	int positive_idx = n - 1;
	while (0 <= positive_idx && 0 < seq[positive_idx]) {
		if (positive_idx - 1 <= -1) {
			point_sum += seq[positive_idx];
			break;
		}
		
		ll value = seq[positive_idx];
		ll left_value = seq[positive_idx - 1];

		if (left_value == 1) {
			point_sum += value + left_value;
			positive_idx -= 2;
			continue;
		} else if (0 < left_value) {
			point_sum += value * left_value;
			positive_idx -= 2;
			continue;
		} else {
			point_sum += value;
			break;
		}
	}

	cout << point_sum;
}

int main()
{
	fastio;

	int t = 1;
	// cin >> t;

	while (t--) {
		solve();
	}

	return 0;
}
