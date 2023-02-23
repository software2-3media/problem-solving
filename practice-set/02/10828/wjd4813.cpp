#include <iostream>
#include <string>
using namespace std;

class Stack {
private:
  int ptr = 0;
  int arr[10001] = { 0 };

public:
  void push(int num) {
    arr[ptr++] = num;
  }
  void pop() {
    if (ptr <= 0) {
      cout << -1 << endl;
    }
    else {
      cout << arr[--ptr] << endl;
    }
  }
  void size() {
    cout << ptr << endl;
  }
  void empty() {
    if (ptr <= 0) {
      cout << 1 << endl;
    }
    else {
      cout << 0 << endl;
    }
  }
  void top() {
    if (ptr <= 0) {
      cout << -1 << endl;
    }
    else {
      cout << arr[ptr-1] << endl;
    }
  }
};

int main() {
  string str;
  int N, num, tmp;
  Stack s;
  cin >> N;

  while (N--) {
    cin >> str;
    if (str == "push") {
      cin >> num;
      tmp = 1;
    }
    else if (str == "pop") {
      tmp = 2;
    }
    else if (str == "size") {
      tmp = 3;
    }
    else if (str == "empty") {
      tmp = 4;
    }
    else if (str == "top") {
      tmp = 5;
    }

    switch (tmp) {
      case 1:
        s.push(num);
        break;
      case 2:
        s.pop();
        break;
      case 3:
        s.size();
        break;
      case 4:
        s.empty();
        break;
      case 5:
        s.top();
        break;
    }
  }
  return 0;
}
