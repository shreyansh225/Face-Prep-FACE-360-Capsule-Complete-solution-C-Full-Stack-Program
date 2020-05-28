#include<iostream>
int main()
{
  int n,i,key,count=0;
  std::cin>>n;
  int a[n];
  for(i=0;i<n;i++)
    std::cin>>a[i];
  std::cin>>key;
  int max=a[0];
  for(i=0;i<n;i++)
  {
    if(a[i]==key)
      count++; 		
  }
  if(count==1)
  	std::cout<<"She passed her exam";
  else
    std::cout<<"She failed";
}
