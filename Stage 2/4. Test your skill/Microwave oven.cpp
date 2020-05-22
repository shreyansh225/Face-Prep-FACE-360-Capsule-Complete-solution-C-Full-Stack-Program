#include<iostream>
using namespace std;
int main()
{
  float n,ht;
  std::cin>>n>>ht;
  if(n==1)
    std::cout<<ht;
  else if(n==2)
    std::cout<<(ht+(ht*0.5));
  else if(n==3)
    std::cout<<ht*2;
  else if(n>3)
    std::cout<<"Number of items is more";
  
}
