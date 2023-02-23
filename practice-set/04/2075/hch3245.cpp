#include <iostream>
#include <queue>
#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

priority_queue<int> pq;
int main() {
	fastio;
	int n;
	cin >> n;
	int num;
	for (int j = 0; j < n; j++) {
		for (int i = 0; i < n; i++) {
			cin >> num;
			pq.push(-num);
		}
		while (pq.size() > n) pq.pop();
	}
	cout << -pq.top() << "\n";
}