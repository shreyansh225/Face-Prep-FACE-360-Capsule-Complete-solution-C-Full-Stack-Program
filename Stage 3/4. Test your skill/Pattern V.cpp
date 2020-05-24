/*  1*2*3*4*17*18*19*20    1*2*3*10*11*12
    --5*6*7*14*15*16       --4*5*8*9
    ----8*9*12*13          ----6*7
    ------10*11        
*/
#include<iostream>
int main()
{
  int n,i,j,k,a,b,c=2,z=1;
  std::cin>>n;
  a=n*(n+1);
  b=a-n+1;
  //c=a-
  for(i=1;i<=n;i++)
  {
    if(i>1)
    {
        for(k=1;k<=(i-1)*2;k++)
            std::cout<<"-";
    }
    for(j=i;j<=n;j++)
      std::cout<<z++<<"*";
    for(j=i;j<=n;j++)
    {
        if(j==n)
            std::cout<<b++;
        else
            std::cout<<b++<<"*";
    }
    std::cout<<"\n";
    b=(--b)-((n*2)-c);
    c+=2;
  }
}
