#include <iostream>
using namespace std;
int main() {
	int N, odd = 0, even = 0, tmp;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> tmp;
		if (tmp % 2 == 0) even++;
		else odd++;
	}

	int cnt = 0;
	if (odd == even) {
		cnt = odd + even;
	}
	else if(odd > even) {
		int remain = odd - even;
		cnt = even * 2 + (remain / 3) * 2;
		if (remain % 3 == 1) cnt -= 1;
		else if (remain % 3 == 2) cnt += 1;
	}
	else {
		cnt = odd * 2 + 1;
	}

	cout << cnt;
}