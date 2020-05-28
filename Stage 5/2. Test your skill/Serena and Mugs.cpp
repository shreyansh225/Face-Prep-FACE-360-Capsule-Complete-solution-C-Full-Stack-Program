#include<iostream>
using namespace std;
int main()
{
  int n,v,i,sum=0;
  std::cin>>n>>v;
  int mugs[n];
  for(i=0;i<n;i++)
  {
    std::cin>>mugs[i];
    sum=sum+mugs[i];
  }
  if(sum<=v)
    std::cout<<"YES";
  else
    std::cout<<"NO";
}
