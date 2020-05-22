#include<iostream>
using namespace std;
int main()
{
  int n,count=0;
  cin>>n;
   if(n==1)
    {
      cout<<n<<"\n";
      cout<<count;
    }
  else
  {
    cout<<n<<"\n";
  while(n!=1)
  {
    if(n%2==0)
    {
      n=n/2;
      cout<<n<<"\n";
      count++;
    }
     else if(n%2==1)
    {
      n=(3*n)+1;
      cout<<n<<"\n";
      count++;
    }
  }
  cout<<count;
  }
}
