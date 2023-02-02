#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int cnt = 0;
	for (int i = 0; i < n; i++) {
		int t;
		cin >> t;
		if (t > 1) {
			bool sosu = true;
			for (int k = 2; k < t; k++) {
				if (t % k == 0) {
					sosu = false;
					break;
				}
			}
			if (sosu) cnt++;
		}
	}
	cout << cnt;
}