#include<iostream>
int dig(int n,int sum)
{
  if(n > 0 || sum > 9)
  {
      if(n == 0) 
        { 
            n = sum; 
            sum = 0; 
        } 
        sum += n % 10; 
        dig(n / 10,sum); 
  }
  else
    return sum;
}
int main()
{
  int n,sum=0;
  std::cin>>n;
  std::cout<<dig(n,sum);
}
