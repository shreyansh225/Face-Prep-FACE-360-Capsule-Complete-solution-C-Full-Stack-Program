#include<iostream>
using namespace std;
int main()
{
  int n,i,t,sum=0;
  cin>>n;
  t=n;
  while(n>0)
  {
    i=n%10;
    sum=sum+i;
    n=n/10;
  }
  if(t%sum==0)
    cout<<"Harshad Number";
  else
    cout<<"Not Harshad Number";
}
