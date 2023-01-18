#include <iostream>
using namespace std;

int main() {
  int amt;
  cin >> amt;
  int n500 = 0, n100 = 0, n50 = 0, n20 = 0, n10 = 0;
  switch (amt >= 500) {
  case 1:
    n500 = amt / 500;
    amt = amt - n500 * 500;
    break;
  }
  switch (amt >= 100) {
  case 1:
    n100 = amt / 100;
    amt = amt - n100 * 100;
    break;
  }
  switch (amt >= 50) {
  case 1:
    n50 = amt / 50;
    amt = amt - n50 * 50;
    break;
  }
  switch (amt >= 20) {
  case 1:
    n20 = amt / 20;
    amt = amt - n20 * 20;
    break;
  }
  switch (amt >= 10) {
  case 1:
    n10 = amt / 10;
    amt = amt - n10 * 10;
    break;
  }
  cout << "Number of Rs.500 notes required = " << n500 << endl;
  cout << "Number of Rs.100 notes required = " << n100 << endl;
  cout << "Number of Rs.50 notes required = " << n50 << endl;
  cout << "Number of Rs.20 notes required = " << n20 << endl;
  cout << "Number of Rs.10 notes required = " << n10 << endl;
}
