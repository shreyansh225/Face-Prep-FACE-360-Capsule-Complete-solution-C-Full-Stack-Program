#include<iostream>
using namespace std;
int main()
{
  int r,c,t;
  std::cin>>r>>c>>t;
  if((t>c && t<=c*2)||(t>c*(r-2) && t<=c*(r-1)))
     std::cout<<"It is a mango tree";
  else
     std::cout<<"It is not a mango tree";
}
