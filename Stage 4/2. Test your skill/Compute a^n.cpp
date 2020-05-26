#include<iostream>
using namespace std;
int p(int a,int n)
{
  if(n>0)
    return a*p(a,n-1);
  else
    return 1;
}
int main()
{
 int a,n;
  std::cin>>a>>n;
  printf("Enter the value of a\nEnter the value of n\n");
  printf("The value of %d power %d is %d",a,n,p(a,n));
}
