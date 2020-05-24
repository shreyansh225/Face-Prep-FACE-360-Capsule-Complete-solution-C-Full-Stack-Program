#include<iostream>
int main()
{
  int n,i,j,k;
  std::cin>>n;
  for(i=1;i<=n;i++)
  {
    for(j=1;j<i;j++)
    	std::cout<<i<<"*";
      std::cout<<i<<"\n";  
  }
  for(k=1;k<=n;k++)
  {
    i--;
    for(j=n;j>k;j--)
    	std::cout<<i<<"*";
      std::cout<<i<<"\n"; 
  }
}
