#define CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
using namespace std;
string cow;
string cowstr;
int main() {
	cin >> cow;
	cin >> cowstr;
	int cnt = 1;
	for (int i = 0; i < cowstr.length() - 1; i++) {
		int now, next;
		for (int j = 0; j < cow.length(); j++) {
			if (cow[j] == cowstr[i]) now = j;
			if (cow[j] == cowstr[i + 1]) next = j;
		}
		if (now >= next)cnt++;
	}
	cout << cnt;
}