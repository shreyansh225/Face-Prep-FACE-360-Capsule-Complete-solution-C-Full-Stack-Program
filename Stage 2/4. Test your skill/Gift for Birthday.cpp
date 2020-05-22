#include<iostream>
using namespace std;
int main()
{
  int y;
  std::cin>>y;
  if(y%400==0||y%4==0&&y%100!=0)
    std::cout<<y<<" is a leap year";
  else
    std::cout<<y<<" is not a leap year";
}
