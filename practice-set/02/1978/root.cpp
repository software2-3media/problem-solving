#include <iostream>
#include <cstring>

using namespace std;
#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

typedef long long ll;

void solve()
{
	int N;
	cin >> N;

	bool isPrime[1003];
	memset(isPrime, 0xFF, sizeof(isPrime));
	isPrime[1] = false;

	for (int i = 1; i <= 1000; i++) {
		if (!isPrime[i])
			continue;
		
		for (int j = 2 * i; j <= 1000; j += i) {
			isPrime[j] = false;
		}
	}

	int cnt = 0;

	for (int i = 0; i < N; i++) {
		int tmp;
		cin >> tmp;

		if (isPrime[tmp])
			cnt++;
	}

	cout << cnt;
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