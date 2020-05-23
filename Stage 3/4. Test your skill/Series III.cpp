#include<iostream>
int main()
{
  int n,x=6,i;
  std::cin>>n;
  for(i=1;i<=n;i++)
  {
    std::cout<<x<<" ";
    x=x+(5*i);
  }
}
