#include<iostream>
using namespace std;
int main()
{
  int m,a=0,b=1,c,i;
  cin>>m;
  if(m==1)
    cout<<a;
  else if(m==2)
    cout<<b;
  else if(m>2)
  {
    for(i=0;i<m-2;i++)
    {
      c=a+b;
      a=b;
      b=c;
    }
    cout<<c;
  }
}
