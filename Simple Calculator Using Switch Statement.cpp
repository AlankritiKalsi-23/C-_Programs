#include <iostream>
using namespace std;

int main() {
  int a,b;
  char oper;
  cout<<"Enter value of a"<<endl;
  cin>>a;
  cout<<"Enter value of b"<<endl;
  cin>>b;
  cout<<"Enter operation you want to perform"<<endl;
  cin>>oper;
  switch(oper)
    {
      case '+': cout<<a+b<<endl;
                break;
      case '-': cout<<a-b<<endl;
                break;
      case '*': cout<<a*b<<endl;
                break;
      case '/': cout<<a/b<<endl;
                break;
      case '%': cout<<a%b<<endl;
                break;
      default: cout<<"Enter a valid operation";
    }
}
