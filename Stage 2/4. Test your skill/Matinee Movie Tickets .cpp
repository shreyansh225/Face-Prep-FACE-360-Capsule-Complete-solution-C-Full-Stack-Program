#include<iostream>
using namespace std;
int main()
{
  float age,st;
  std::cin>>age>>st;
  if(st>=12.00 && st< 18.00)
  {
    if(age>13)
      std::cout<<"$5.00";
    else
      std::cout<<"$2.00";
  }
  else
  {
     if(age>13)
      std::cout<<"$8.00";
    else
      std::cout<<"$4.00";
  }
}
