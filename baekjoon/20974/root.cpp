#include <iostream>
#include <stdlib.h>
#include <vector>
#include <stack>
#include <queue>
#include <deque>
#include <map>
#include <set>
#include <cstring>
#include <algorithm>
#include <math.h>

using namespace std;
#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

#define NUM_OF_ALPHABET 26
#define INF 0x3f3f3f3f

typedef long long ll;
typedef long double ld;

int N;
int numOdd;
int numEven;

void solve() {
  int cnt = min(numOdd, numEven) * 2;

  if (numOdd < numEven) {
    cnt++;
  } else if (numEven < numOdd) {
    int remainOdd = numOdd - numEven;
    cnt += 2 * (remainOdd / 3);

    if (remainOdd % 3 == 1) {
      cnt--;
    } else if (remainOdd % 3 == 2) {
      cnt++;
    }
  }

  cout << cnt;
}

void input() {
  cin >> N;
  for (int i = 0; i < N; i++) {
    int breedId; cin >> breedId;
    if ((breedId & 1) == 0) numEven++;
    else numOdd++;
  }
}

int main() {
  fastio;

  input();
  solve();

  return 0;
}