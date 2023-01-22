#include <iostream>
#include <queue>
#include <utility>

using namespace std;
#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

#define NUM_OF_ALPHABET 26
#define INF 0x3f3f3f3f

typedef long long ll;
typedef long double ld;

#define MAX_HEALTH 61

typedef struct {
	int health_a;
	int health_b;
	int health_c;
} scv_t;

void solve()
{
	int N;
	int scv_health[3];

	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> scv_health[i];
	}

	const int attack_case[6][3] = {
		{ 9, 3, 1 }, { 9, 1, 3 },
		{ 3, 9, 1 }, { 3, 1, 9 },
		{ 1, 9, 3 }, { 1, 3, 9 },
	};

	bool visited[MAX_HEALTH][MAX_HEALTH][MAX_HEALTH];
	queue<pair<scv_t,int>> q;

	q.push({ { scv_health[0], scv_health[1], scv_health[2] }, 0 });
	visited[scv_health[0]][scv_health[1]][scv_health[2]] = true;

	while (!q.empty()) {
		scv_t cur_scv = q.front().first;
		int cur_cnt = q.front().second;
		q.pop();

		for (int i = 0; i < 6; i++) {
			int next_a = cur_scv.health_a - attack_case[i][0];
			int next_b = cur_scv.health_b - attack_case[i][1];
			int next_c = cur_scv.health_c - attack_case[i][2];

			if (next_a < 0)
				next_a = 0;
			if (next_b < 0)
				next_b = 0;
			if (next_c < 0)
				next_c = 0;
			
			if (next_a == 0 && next_b == 0 && next_c == 0) {
				cout << cur_cnt + 1;
				return;
			}
			if (visited[next_a][next_b][next_c]) continue;

			visited[next_a][next_b][next_c] = true;
			q.push({ { next_a, next_b, next_c }, cur_cnt + 1 });
		}
	}
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
