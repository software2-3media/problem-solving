#include <iostream>
#include <algorithm>

using namespace std;
#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

#define INF 0x3f3f3f3f

typedef long long ll;

#define MAX_N 100005

void solve()
{
	int N, S;
	int sum_seq[MAX_N];
	cin >> N >> S;
	for (int i = 1; i <= N; i++) {
		int tmp;
		cin >> tmp;
		sum_seq[i] = sum_seq[i - 1] + tmp;
	}

	int min_length = INF;
	int left = 0;
	int right;

	for (right = 1; right <= N; right++) {
		if (S <= sum_seq[right] - sum_seq[left]) {
			while (S <= sum_seq[right] - sum_seq[left + 1]) {
				left++;
			}
			min_length = min(min_length, right - left);
			left++;
		}
	}

	right--;
	if (S <= sum_seq[right] - sum_seq[left]) {
		while (S < sum_seq[right] - sum_seq[left + 1]) {
			left++;
		}
		min_length = min(min_length, right - left);
	}

	cout << (min_length != INF ? min_length : 0);
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