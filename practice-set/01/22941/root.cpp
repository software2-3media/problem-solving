#include <iostream>
#include <algorithm>
#include <cstring>
#include <vector>
#include <math.h>

using namespace std;
#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

typedef long long ll;

void solve()
{
	ll hp_yong, atk_yong;
	ll hp_ma, atk_ma;
	ll p, s;
	cin >> hp_yong >> atk_yong >> hp_ma >> atk_ma;
	cin >> p >> s;

	ll remain_hp_ma = (hp_ma - p) % atk_yong;
	if (remain_hp_ma == 0 || (remain_hp_ma + p) > atk_yong) {
		hp_ma += s;
	}

	ll turn_yong = ceil((double)hp_yong / atk_ma);
	ll turn_ma = ceil((double)hp_ma / atk_yong);

	cout << (turn_ma <= turn_yong ? "Victory!" : "gg");
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
