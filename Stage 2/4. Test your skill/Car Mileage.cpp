#include<iostream>
using namespace std;
int main()
{
  float mil,l,dtt;
  std::cin>>mil>>l>>dtt;
  if(dtt/l>mil)
    std::cout<<"Cannot reach";
  else
    std::cout<<"Can reach";
}
