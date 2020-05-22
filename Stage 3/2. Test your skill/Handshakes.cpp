#include<iostream>
using namespace std;
int main()
{
  int i,n,sum=0;
  std::cin>>n;
  for(i=1;i<n;i++)
  {
    sum=sum+(n-i);
  }
  cout<<sum;
}
