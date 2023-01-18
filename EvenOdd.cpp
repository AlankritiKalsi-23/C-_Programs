#include <iostream>
using namespace std;

bool isEven(int n)
{
  if(n&1){
    return 0;
  }
  return 1;
}

int main() {
  int num;
  cin >> num;
  if(isEven(num)){
    cout << "Number is Even";
  }
  else{
    cout << "Number is Odd";
  }
}
