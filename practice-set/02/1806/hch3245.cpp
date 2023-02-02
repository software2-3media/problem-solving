#include <iostream>
using namespace std;
int arr[100001] = { 0 };
int sarr[100001] = { 0 };
int sum = 0;

int main() {
	int n, s;
	cin >> n >> s;

	for (int i = 1; i <= n; i++) {
		cin >> arr[i];
		sum += arr[i];
		sarr[i] = sum;
		//cout << sarr[i] << "\n";
	}
	int min = 1000001;
	int start = 0, end = 1;
	while (start <= n && end <= n) {
		//cout << "start: " << start << " end: " << end << "\n";
		if (start >= end) {
			end++;
		}
		else {
			if (sarr[end] - sarr[start] >= s) {
				if (end - start < min) min = end - start;
				start++;
			}
			else {
				end++;
			}
		}
	}
	if (min == 1000001) {
		cout << 0 << "\n";
	}
	else {
		cout << min << "\n";
	}
}