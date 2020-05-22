#include<iostream>
#include<string.h>
using namespace std;
int main()
{
char a[10];
 int b;
 std::cin>>a;
 std::cin>>b;
if(strcmp(a,"front")==0)
{
  if(b==1)
  	std::cout<<"Left Handed";
  else
    std::cout<<"Right Handed";
}
  else if(strcmp(a,"rear")==0)
  {
    if(b==1)
  	std::cout<<"Right Handed";
    else
      std::cout<<"Left Handed";
  }
}
