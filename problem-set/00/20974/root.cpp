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
	int N;
	int numOdd;
	int numEven;

	cin >> N;
	for (int i = 0; i < N; i++) {
		int breedId;
		cin >> breedId;
		if ((breedId & 1) == 0)
			numEven++;
		else
			numOdd++;
	}

	int cnt = min(numOdd, numEven) * 2;

	if (numOdd < numEven) {
		cnt++;
	} else if (numEven < numOdd) {
		int remainOdd = numOdd - numEven;
		cnt += 2 * (remainOdd / 3);

		if (remainOdd % 3 == 1)
			cnt--;
		else if (remainOdd % 3 == 2)
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
