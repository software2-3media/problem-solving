#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		int x1, y1, r1, x2, y2, r2;
		cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
		float dist = (float)((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
		dist = sqrt(dist);
		if (dist == 0 && r1 == r2) {
			cout << "-1\n";
		}
		else if (dist > (float)(r1 + r2) || dist < fabs(r1 - r2)) {
			cout << "0\n";
		}
		else if (dist == (float)(r1 + r2) || dist == fabs(r1 - r2)) {
			cout << "1\n";
		}
		else if (dist < (float)(r1 + r2)) {
			cout << "2\n";
		}
	}
}