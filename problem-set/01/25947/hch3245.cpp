#include <iostream>
#include <algorithm>

using namespace std;
int arr[100001];
int main() {
	int n, b, a;
	cin >> n >> b >> a;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	sort(arr, arr + n);

	int cnt = 0, changeN;
	bool changed = false;
	for (int i = 0; i < n; i++) {
		if (b - arr[i] >= 0) {
			b -= arr[i];
			cnt++;
		}
		else {
			//cout << "i: " << i << " arr: " << arr[i] << " cnt: " << cnt << " b:" << b << "\n";
			if (!changed) {
				changeN = i;
				changed = true;
			}
			if (a > 0) {
				if (b - arr[i] / 2 >= 0) {
					a--;
					cnt++;
					b -= arr[i] / 2;
				}
				else {
					while (b - arr[i] / 2 < 0) {
						changeN--;
						if (changeN >= 0) {
							a--;
							b += arr[changeN] / 2;
						}
						else break;
						if (a <= 0) break;
					}
					if (a >= 1 && b - arr[i] / 2 >= 0) {
						a--;
						cnt++;
						b -= arr[i] / 2;
					}
					else break;
				}
			}
			else {
				break;
			}
		}
	}

	cout << cnt;
}