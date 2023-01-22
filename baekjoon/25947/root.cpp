#include <iostream>
#include <algorithm>

using namespace std;
#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

#define NUM_OF_ALPHABET 26
#define INF 0x3f3f3f3f

typedef long long ll;
typedef long double ld;

void solve()
{
	int n, b, a;
	int halfPrice[100005];

	cin >> n >> b >> a;
	for (int i = 0; i < n; i++) {
		int temp;
		cin >> temp;
		halfPrice[i] = temp / 2;
	}

	sort(halfPrice, halfPrice + n);

	int cnt;
	int sum = 0;

	for (cnt = 0; cnt < n; cnt++) {
		int tempSum = sum + halfPrice[cnt];
		if (a <= cnt)
			tempSum += halfPrice[cnt - a];

		if (b < tempSum)
			break;
		sum = tempSum;
	}

	cout << cnt--;
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
