#include <iostream>
#include <cstring>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int t, n;
	cin >> t;
	for (int testi = 0; testi < t; testi++) {
		cin >> n;
		vector<string> book;
		string callnum;
		for (int i = 0; i < n; i++) {
			cin >> callnum;
			book.push_back(callnum);
		}
		sort(book.begin(), book.end());

		bool overlap = false;
		for (int j = 0; j < book.size() - 1; j++) {
			string str1 = book[j];
			string str2 = book[j + 1].substr(0, str1.size());
			if (str1.compare(str2) == 0){
				overlap = true;
				break;
			}
		}
		if (!overlap) {
			cout << "YES\n";
		}
		else {
			cout << "NO\n";
		}
	}
}