#include <iostream>
#include <vector>
using namespace std;

vector<int>graph[101];
bool visit[101] = { false };
int n;

void dfs(int start) {
	for (int i = 0; i < graph[start].size(); i++) {
		if (!visit[graph[start][i]]) {
			visit[graph[start][i]] = true;
			dfs(graph[start][i]);
		}
	}
}

void resetV() {
	for (int i = 0; i < 100; i++) {
		visit[i] = false;
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n;
	int tmp;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> tmp;
			if (tmp == 1) {
				graph[i].push_back(j);
			}
		}
	}
	for (int i = 0; i < n; i++) {
		resetV();
		dfs(i);
		for (int j = 0; j < n; j++) {
			cout << visit[j] << " ";
		}
		cout << "\n";
	}

}