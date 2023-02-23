#include <iostream>
#include <string>
#include <stack>
using namespace std;
string str;
stack<char> s;

int main() {
	cin >> str;
	for (int i = 0; i < str.size(); i++) {
		if (str[i] >= 'A' && str[i] <= 'Z') {
			cout << str[i];
		}
		else if (str[i] == '+' || str[i] == '-') {
			while (!s.empty()) {
				if (s.top() != '(' && s.top() != ')') {
					cout << s.top();
					s.pop();
				}
				else break;
			}
			s.push(str[i]);
		}
		else if (str[i] == '*' || str[i] == '/') {
			while (!s.empty()) {
				if (s.top() == '*' || s.top() == '/') {
					cout << s.top();
					s.pop();
				}
				else break;
			}
			s.push(str[i]);
		}
		else if (str[i] == '(') {
			s.push(str[i]);
		}
		else if (str[i] == ')') {
			while (s.top() != '(') {
				cout << s.top();
				s.pop();
			}
			s.pop();
		}
	}
	while (!s.empty()) {
		cout << s.top();
		s.pop();
	}
}