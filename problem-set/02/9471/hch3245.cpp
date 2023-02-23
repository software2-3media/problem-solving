#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		int m;
		vector<int> v;
		cin >> i >> m;
		v.push_back(0);
		v.push_back(1);
		v.push_back(1);
		int cnt = 3;
		while (true) {
			v.push_back((v.at(cnt - 2) + v.at(cnt - 1)) % m);
			if (v.at(cnt - 1) % m == 0 && v.at(cnt) % m == 1) break;
			cnt++;
		}
		cout << i << " " << cnt - 1 << "\n";
	}
}