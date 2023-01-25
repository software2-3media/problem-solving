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

	int stack[MAX_N];
	int stack_ptr = 0;

	while (N--) {
		char cmd[10];
		int value;

		cin >> cmd;
		
		if (!strcmp(cmd, "push")) {
			cin >> value;

			stack[stack_ptr] = value;
			stack_ptr++;
		} else if (!strcmp(cmd, "pop")) {
			if (stack_ptr == 0) {
				cout << "-1\n";
				continue;
			}

			stack_ptr--;
			cout << stack[stack_ptr] << '\n';
		} else if (!strcmp(cmd, "size")) {
			cout << stack_ptr << '\n';
		} else if (!strcmp(cmd, "empty")) {
			if (stack_ptr == 0)
				cout << "1\n";
			else
				cout << "0\n";
		} else if (!strcmp(cmd, "top")) {
			if (stack_ptr == 0) {
				cout << "-1\n";
				continue;
			}

			cout << stack[stack_ptr - 1] << '\n';
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