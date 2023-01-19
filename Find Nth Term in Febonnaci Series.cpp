#include <iostream>
using namespace std;

int febonnaci_series(int n) {
  int a = 0, b = 1;
  for (int i = 3; i <= n; i++) {
    int nextNum = a + b;
    a = b;
    b = nextNum;
  }
  return b;
}

int main() {
  int n;
  cin >> n;
  cout << febonnaci_series(n);
}
