#include<iostream>
using namespace std;
int main()
{
  //flipkart 1
  //snapdeal 2
  //amazon 3
  float p1,p2,p3,d1,d2,d3,s1,s2,s3;
  std::cin>>p1>>d1>>s1>>p2>>d2>>s2>>p3>>d3>>s3;
  d1=d1/100;
  d2=d2/100;
  d3=d3/100;
  float f,s,a;
  f=p1-(p1*d1)+s1;
  s=p2-(p2*d2)+s2;
  a=p3-(p3*d3)+s3;
  std::cout<<"In Flipkart Rs."<<f<<"\n";
  std::cout<<"In Snapdeal Rs."<<s<<"\n";
  std::cout<<"In Amazon Rs."<<a<<"\n";
  if(f<=s && f<=a)
    std::cout<<"He will prefer Flipkart";
  else if(s<=f && s<=a)
    std::cout<<"He will prefer Snapdeal";
  else
    std::cout<<"He will prefer Amazon";
}
