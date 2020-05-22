#include<iostream>
int main()
{
  int m,f;
  std::cin>>m>>f;
  if(f>m)
    std::cout<<"Sorry, you can't enter";
  else if(f==m)
    std::cout<<"Yes, you can enter. Kindly use a rope.";
  else
    std::cout<<"Yes, you can enter.";
}
