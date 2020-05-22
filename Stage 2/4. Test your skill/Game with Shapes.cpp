#include<iostream>
using namespace std;
int main()
{
  int r,l;
  std::cin>>r>>l;
  if(r*2==l)
    std::cout<<"circle can be inside a square";
  else
    std::cout<<"circle cannot be inside a square";
}
