#include<iostream>
#include <iomanip>
using namespace std;
int main()
{
  int n;
  float scr=0;
  for(int i=0;i<3;)
  {
    cin>>n;
    if(n>0)
    {
      if(n%2==0)
        scr-=0.5;
      else if(n%2==1)
        {scr+=1;
        i++;}
    }
    else 
    {
      scr-=1;
      break;
    }
  }
 cout<<fixed<<setprecision(1)<<scr;
}
