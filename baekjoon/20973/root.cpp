#include <iostream>
#include <algorithm>

using namespace std;
#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

#define NUM_OF_ALPHABET 26
#define INF 0x3f3f3f3f

typedef long long ll;
typedef long double ld;

#define MAX_N 1003

void solve()
{
	char cowphabet[NUM_OF_ALPHABET + 1];
	char letters[MAX_N];
	cin >> cowphabet;
	cin >> letters;

	int cnt = 0;
	int idxLetters = 0;
	int lenLetters = strlen(letters);

	while (idxLetters < lenLetters) {
		cnt++;

		for (int i = 0; i < NUM_OF_ALPHABET; i++) {
			if (letters[idxLetters] == cowphabet[i]) {
				idxLetters++;
				
				if (lenLetters <= idxLetters)
					break;
			}
		}
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
