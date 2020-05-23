#include<iostream>
int main()
{
  float n,x=0.5;
  std::cin>>n;
  if(n==1)
    std::cout<<x;
  else 
    std::cout<<x<<" ";
  for(int i=1;i<n;i++)
  {
    x=x*3;
  	std::cout<<x<<" ";
  }
}
