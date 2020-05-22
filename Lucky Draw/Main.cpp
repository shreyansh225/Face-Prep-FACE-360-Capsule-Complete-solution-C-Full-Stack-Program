#include<iostream>
int main()
{
int n,i,j=0;
 std::cin>>n;
 for(i=1; i <= n; i++)
 {
  if ((n % i) == 0)
    j++;
 }
 if(j==2)
	std::cout<<"Eligible";
else
  std::cout<<"Not eligible";
}
