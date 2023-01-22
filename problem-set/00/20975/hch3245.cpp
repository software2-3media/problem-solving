#include <iostream>
#include <algorithm>
using namespace std;
int arrA[20];
int arrB[20];

int main() {
	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> arrA[i];
	}
	for (int i = 0; i < N; i++) {
		cin >> arrB[i];
	}
	sort(arrA, arrA + N, greater<>());

	long long cnt = 1;
	for (int i = 0; i < N; i++) {
		int temp = 0;
		for (int j = 0; j < N; j++) {
			if (arrA[i] <= arrB[j]) {
				temp++;
			}
		}
		temp -= i;
		cnt = cnt * temp;
	}

	if (cnt < 0) cnt = 0;
	cout << cnt;
}
