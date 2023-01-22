#include <iostream>
#include <algorithm>

using namespace std;
#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

#define NUM_OF_ALPHABET 26
#define INF 0x3f3f3f3f

typedef long long ll;
typedef long double ld;

#define MAX_N 21

void solve()
{
	int N;
	int cowHeight[MAX_N];
	int stallHeight[MAX_N];

	cin >> N;
	for (int i = 0; i < N; i++)
		cin >> cowHeight[i];
	for (int i = 0; i < N; i++)
		cin >> stallHeight[i];
	
	sort(cowHeight, cowHeight + N);
	sort(stallHeight, stallHeight + N);

	int idxStalls = N - 1;
	int possibleStalls = 0;
	ll cnt = 1;

	for (int i = N - 1; i >= 0; i--) {
		while (cowHeight[i] <= stallHeight[idxStalls]) {
			idxStalls--;
			possibleStalls++;
		}
		cnt *= possibleStalls;
		possibleStalls--;
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
