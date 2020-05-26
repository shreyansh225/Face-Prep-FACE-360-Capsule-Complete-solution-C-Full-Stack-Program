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

/*
#include<iostream>
int dig(int n,int s)
{
  if(s>9 || n>0)
  {
    if(n%10>0)
    {
      s=s+n%10;
      return dig(n/10,s);
    }
    else
      return dig(s,0);  
  }
}
int main()
{
  int n,s=0;
  std::cin>>n;
  std::cout<<dig(n,s);
}*/
