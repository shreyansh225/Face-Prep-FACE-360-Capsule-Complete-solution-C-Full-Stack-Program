#include<iostream>
#include<math.h>
using namespace std;
int main()
{
  int x,y,l,m,j,r,z,f;
  int a=3,b=4;
  cin>>x;
  cin>>y;
  l=(x-a);
  m=(y-b);
  z=(l*l)+(m*m);
  f=sqrt(z);
  cout<<f;  
}
