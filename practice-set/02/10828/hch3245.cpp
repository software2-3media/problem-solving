#include <iostream>
#include <cstring>
using namespace std;
int arr[10000];

int main() {
	int n;
	int top = -1;
	cin >> n;
	for (int i = 0; i < n; i++) {
		string str;
		cin >> str;
		if (str.compare("push") == 0) {
			int num;
			cin >> num;
			top++;
			arr[top] = num;
		}
		else if (str.compare("pop") == 0) {
			if (top == -1) {
				cout << "-1\n";
			}
			else {
				cout << arr[top] << "\n";
				top--;
			}
		}
		else if (str.compare("size") == 0) {
			cout << (top + 1) << "\n";
		}
		else if (str.compare("empty") == 0) {
			if (top == -1) {
				cout << "1\n";
			}
			else {
				cout << "0\n";
			}
		}
		else if (str.compare("top") == 0) {
			if (top == -1) {
				cout << "-1\n";
			}
			else {
				cout << arr[top] << "\n";
			}
		}
	}
}