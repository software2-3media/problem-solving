#include <iostream>
#include <queue>

using namespace std;
#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

typedef long long ll;

void solve()
{
	int N; cin >> N;

	bool visited[502][502];
	for (int i = 1; i <= N; i++) {
		visited[i][i] = true;
	}

	queue<int> q;
	q.push(1);

	int one_cnt = N - 1;

	while (!q.empty()) {
		int num_a = q.front();
		q.pop();

		cout << 'a' << num_a << ' ';

		for (int i = 1; i <= N; i++) {
			if (i == 1 && one_cnt == 1)
				continue;
			if (!visited[num_a][i]) {
				visited[num_a][i] = true;
				visited[i][num_a] = true;

				if (i == 1)
					one_cnt--;

				q.push(i);
				break;
			}
		}

		if (num_a == 1)
			one_cnt--;
	}
	
	cout << "a1";
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
