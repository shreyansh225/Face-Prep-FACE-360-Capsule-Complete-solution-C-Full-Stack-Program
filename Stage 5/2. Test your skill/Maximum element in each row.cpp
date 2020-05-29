#include<iostream>
using namespace std;
int main()
{
  int r,c,i,j,max;
  std::cin>>r>>c;
  int a[r][c];
  for(i=0;i<r;i++)
    for(j=0;j<c;j++)
      std::cin>>a[i][j];
  for(i=0;i<r;i++)
  {
    max=a[i][0];
    for(j=0;j<c;j++)
      if(a[i][j]>=max)
         max=a[i][j];
     std::cout<<max<<"\n";
  }
}
