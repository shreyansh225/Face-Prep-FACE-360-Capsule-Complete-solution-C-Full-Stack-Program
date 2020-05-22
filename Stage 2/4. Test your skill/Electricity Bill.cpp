#include<iostream>
using namespace std;
int main()
{
 int u;
  std::cin>>u;
  if(u<=200)
    std::cout<<"Rs."<<(int)(u*0.5);
 else if(u<=400)
    std::cout<<"Rs."<<u*0.65+100;
else if(u<=600)
    std::cout<<"Rs."<<u*0.80+200;
else if(u>600)
    std::cout<<"Rs."<<u*1.25+425;
  
}
