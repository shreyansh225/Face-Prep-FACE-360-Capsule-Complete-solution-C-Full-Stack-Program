#include<iostream>
using namespace std;
int main()
{
  int n;
  std::cin>>n;
  int a=n/1000;
  int b=n%10;
  std::cout<<b+a;
}
