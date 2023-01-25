#include <iostream>
#include <math.h>
#include <algorithm>

using namespace std;
#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

typedef long long ll;

void solve()
{
	int x1, y1, r1;
	int x2, y2, r2;
	cin >> x1 >> y1 >> r1;
	cin >> x2 >> y2 >> r2;

	if (x1 == x2 && y1 == y2) {
		if (r1 == r2) {
			cout << "-1\n";
		} else {
			cout << "0\n";
		}

		return;
	}

	double dist = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));

	if (dist > r1 + r2) {
		cout << "0\n";
	} else if (dist == r1 + r2) {
		cout << "1\n";
	} else {
		double compare_value1 = min(r1, r2) + dist;
		double compare_value2 = max(r1, r2);

		if (compare_value1 == compare_value2) {
			cout << "1\n";
		} else if (compare_value1 < compare_value2) {
			cout << "0\n";
		} else {
			cout << "2\n";
		}
	}
}

int main()
{
	fastio;

	int t = 1;
	cin >> t;

	while (t--) {
		solve();
	}

	return 0;
}