#include<iostream>
using namespace std;
int main()
{
  int sd=0,sc=0,d1,d2,c1,c2,count=0;
  std::cin>>d1>>c1>>d2>>c2;
  sd=d1+d2;
  sc=c1+c2;
  while(sc>100)
  {
    sc=sc-100;
    count++;
  }
  sd+=count;
  cout<<sd<<"\n"<<sc;
}
