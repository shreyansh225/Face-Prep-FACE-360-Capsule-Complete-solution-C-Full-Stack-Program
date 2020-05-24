#include<iostream>
int main()
{
  int m,n,r,x=1;
  std::cin>>m>>n>>r;
  for(int i=1;i<=n;i++)
  {
    x=x*m;
  }
  if(x>=r)
    std::cout<<"Doctor, you can proceed with your experiment.";
  else
    std::cout<<"Sorry Doctor! You need more bacteria.";
}
