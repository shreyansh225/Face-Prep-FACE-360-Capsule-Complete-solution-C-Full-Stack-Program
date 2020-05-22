#include<iostream>
using namespace std;
int main()
{
  int t,n=0,sn=0,count=1;
  cin>>t;
  cin>>sn;
  while(sn<t)
  {
    cin>>n;
    sn=sn+n;
    count++;
  }
  cout<<"The number of turns is "<<count;
}
