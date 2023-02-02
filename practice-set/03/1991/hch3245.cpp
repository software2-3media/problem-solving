#include <iostream>
#include <stack>
using namespace std;
int arr[27][2] = { 0 };

void preorder(int node) {
	if (node == -1) {
		return;
	}
	cout << (char)(node + 'A');
	preorder(arr[node][0]);
	preorder(arr[node][1]);
}

void inorder(int node) {
	if (node == -1) {
		return;
	}
	inorder(arr[node][0]);
	cout << (char)(node + 'A');
	inorder(arr[node][1]);
}

void postorder(int node) {
	if (node == -1) {
		return;
	}
	postorder(arr[node][0]);
	postorder(arr[node][1]);
	cout << (char)(node + 'A');
}

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		char a, a0, a1;
		cin >> a >> a0 >> a1;
		int node = (int)(a - 'A');
		if (a0 == '.') {
			arr[node][0] = -1;
		}
		else {
			arr[node][0] = a0 - 'A';
		}
		if (a1 == '.') {
			arr[node][1] = -1;
		}
		else {
			arr[node][1] = a1 - 'A';
		}
	}
	preorder(0);
	cout << "\n";
	inorder(0);
	cout << "\n";
	postorder(0);
	cout << "\n";
}