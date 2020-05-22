#include<iostream>
using namespace std;
int main()
{
  int b,an,cn;
  std::cin>>b>>an>>cn;
  if(an*75+cn*30 >b)
    std::cout<<"Boat will drow";
  else
    std::cout<<"Boat is stable";
}
