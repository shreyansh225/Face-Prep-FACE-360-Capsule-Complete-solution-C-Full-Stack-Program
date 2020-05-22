#include<iostream>
using namespace std;
int main()
{
  float x,y,r;
  std::cin>>x>>r>>y;
  int i=(x*r*y)/100;
  std::cout<<i<<"\n";
  std::cout<<i+x<<"\n";
  std::cout<<i*0.02<<"\n";
  std::cout<<i+x-(i*0.02);
}
