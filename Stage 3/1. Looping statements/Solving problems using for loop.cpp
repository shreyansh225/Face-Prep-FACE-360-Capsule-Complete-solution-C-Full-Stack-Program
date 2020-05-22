#include<iostream>
int main()
{
  int i,n,f=1;
  std::cin>>n;
  for(i=1;i<=n;i++)
    f=f*i;
  std::cout<<f;
}
