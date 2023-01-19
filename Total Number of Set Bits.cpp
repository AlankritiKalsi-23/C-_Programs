#include <iostream>
using namespace std;

int no_of_set_bits(int n) {
  int count = 0;
  while (n) {
    if (n & 1) {
      count++;
    }
    n = n >> 1;
  }
  return count;
}

int main() {
  int a, b;
  cin >> a >> b;
  cout << no_of_set_bits(a) + no_of_set_bits(b);
}
