#include <iostream>
#include <queue>
using namespace std;
int dx[8] = { -2, -1, 1, 2, 2, 1, -1, -2 };
int dy[8] = { 1, 2, 2, 1, -1, -2, -2, -1 };


int main() {
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		int l, x, y, destx, desty;
		cin >> l >> x >> y >> destx >> desty;
		queue < pair<int, int> > q;
		int arr[301][301] = { 0 };
		bool v[301][301] = { false };
		q.push({ x, y });
		v[x][y] = true;
		while (!q.empty()) {
			int x1 = q.front().first;
			int y1 = q.front().second;
			q.pop();
			if (x1 == destx && y1 == desty) {
				cout << arr[x1][y1] << "\n";
				break;
			}
			for (int i = 0; i < 8; i++) {
				int x2 = x1 + dx[i];
				int y2 = y1 + dy[i];
				if (x2 >= 0 && x2 < l && y2 >= 0 && y2 < l && !v[x2][y2]) {
					q.push({ x2, y2 });
					//cout << "push! " << x2 << " " << y2 << "\n";
					v[x2][y2] = true;
					arr[x2][y2] = arr[x1][y1] + 1;
				}
			}
		}
	}
}