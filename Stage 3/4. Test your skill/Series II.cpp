#include<iostream>
int main()
{
  int n,x=11;
  std::cin>>n;
  for(int i=0;i<n;i++)
  {
    std::cout<<x*x<<" ";
      x=x+4;
  }
}
