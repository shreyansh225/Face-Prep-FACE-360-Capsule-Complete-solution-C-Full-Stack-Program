#include<iostream>
using namespace std;
int main()
{
  int n,se=0,so=0,x;
  cin>>n;
  while(n>0)
  {
    x=n%10;
    if(x%2==0)
      se+=x;
    else
      so+=x;
    n/=10;
  }
  if(se==so)
    cout<<"Yes";
  else
    cout<<"No";
}
