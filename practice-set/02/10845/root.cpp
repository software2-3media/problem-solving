#include <iostream>
#include <cstring>

using namespace std;
#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

#define INF 0x3f3f3f3f

typedef long long ll;

#define MAX_N 10004

void solve()
{
	int N;
	cin >> N;

	int queue[MAX_N];
	int front = -1;
	int back = 0;

	while (N--) {
		char cmd[10];
		int value;

		cin >> cmd;
		
		if (!strcmp(cmd, "push")) {
			cin >> value;

			queue[back] = value;
			back++;
		} else if (!strcmp(cmd, "pop")) {
			if (front + 1 == back) {
				cout << "-1\n";
				continue;
			}

			front++;
			cout << queue[front] << '\n';
		} else if (!strcmp(cmd, "size")) {
			cout << back - front - 1 << '\n';
		} else if (!strcmp(cmd, "empty")) {
			if (front + 1 == back)
				cout << "1\n";
			else
				cout << "0\n";
		} else if (!strcmp(cmd, "front")) {
			if (front + 1 == back) {
				cout << "-1\n";
				continue;
			}

			cout << queue[front + 1] << '\n';
		} else if (!strcmp(cmd, "back")) {
			if (front + 1 == back) {
				cout << "-1\n";
				continue;
			}

			cout << queue[back - 1] << '\n';
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