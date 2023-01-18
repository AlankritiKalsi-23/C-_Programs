#include <iostream>
using namespace std;

// 1 - Prime
// 0 - Not Prime

bool isPrime(int n) {
  for (int i = 2; i < n; i++) {
    if (n % i == 0)
      return 0;
  }
  return 1;
}

int main() {
  int num;
  cin >> num;
  if (isPrime(num)) {
    cout << num << " is a Prime Number";
  } else {
    cout << num << " is not a Prime Number";
  }
}
