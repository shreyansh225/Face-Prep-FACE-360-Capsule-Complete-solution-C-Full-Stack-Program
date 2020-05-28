#include<iostream>
using namespace std;
int main()
{
  int n,i,c=0;
  std::cin>>n;
  int a[n];
  std::cout<<"Enter the number of elements in the array\nEnter the elements in the array";
  std::cout<<"\nThe array is ";
  for(i=0;i<n;i++)
  {
    std::cin>>a[i];
    if(a[i]%2==0)
      c++;
  }
  if(c==n)
    std::cout<<"Even";
  else if(c==0)
    std::cout<<"Odd";
  else
    std::cout<<"Mixed";
}
