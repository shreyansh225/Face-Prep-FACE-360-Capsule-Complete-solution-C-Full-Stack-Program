#include<iostream>
using namespace std;
int main()
{
  int by,cy;
  std::cin>>by>>cy;
  if(by>cy)
  { 	
    by=1900+by;
 	cy=2000+cy;
}
else
{
  by=2000+by;
  cy=2000+cy;
}
  std::cout<<cy-by;
}
