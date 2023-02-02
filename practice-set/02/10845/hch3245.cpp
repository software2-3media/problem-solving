#include <iostream>
#include <vector>
#include <cstring>
using namespace std;
vector<int> v;

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		string str;
		cin >> str;
		if (str.compare("push") == 0) {
			int num;
			cin >> num;
			v.push_back(num);
		}
		else if (str.compare("pop") == 0) {
			if (v.empty()) {
				cout << "-1\n";
			}
			else {
				cout << v.front() << "\n";
				v.erase(v.begin());
			}
		}
		else if (str.compare("size") == 0) {
			cout << v.size() << "\n";
		}
		else if (str.compare("empty") == 0) {
			if (v.empty()) {
				cout << "1\n";
			}
			else {
				cout << "0\n";
			}
		}
		else if (str.compare("front") == 0) {
			if (v.empty()) {
				cout << "-1\n";
			}
			else {
				cout << v.front() << "\n";
			}
		}
		else if (str.compare("back") == 0) {
			if (v.empty()) {
				cout << "-1\n";
			}
			else {
				cout << v.back() << "\n";
			}
		}
	}
}