#include<iostream>
int fib(int n)
{
    if (n <= 1) 
        return n; 
    return fib(n-1) + fib(n-2);
}
int main()
{
  int n;
  std::cin>>n;
  std::cout<<"The term "<<n<<" in the fibonacci series is "<<fib(n-1);
}
