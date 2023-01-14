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

#define MAX_N 1003
#define MAX_M 10004
#define MAX_NM 15
#define MAX_RC 1502
#define MAX_LENGTH 2503
#define NUM_OF_ALPHABET 26
#define INF 0x3f3f3f3f

#define SQUARE(x) ((x) * (x))
#define MOD(x) ((x) % 1000000007)
#define CALCUL_DIST(A, B) (sqrt(pow(A.first - B.first, 2) + pow(A.second - B.second, 2)))
#define COOR_TO_ARRAY(name, coor) name[coor.first][coor.second]

typedef long long ll;
typedef long double ld;

char cowphabet[NUM_OF_ALPHABET + 1];
char letters[MAX_N];

void solve() {
  int cnt = 0;
  int idxLetters = 0;
  int lenLetters = strlen(letters);

  while (idxLetters < lenLetters) {
    cnt++;
    for (int i = 0; i < NUM_OF_ALPHABET; i++) {
      if (letters[idxLetters] == cowphabet[i]) {
        idxLetters++;
        if (lenLetters <= idxLetters) break;
      }
    }
  }

  cout << cnt;
}

void input() {
  cin >> cowphabet;
  cin >> letters;
}

int main() {
  fastio;

  input();
  solve();

  return 0;
}