#include<iostream>
int swap(int *a,int *b)
{
  int temp=*a;
  *a=*b;
  *b=temp;
}
int main()
{
  int a,b;
  std::cin>>a>>b;
  printf("Before swapping a= %d and b=%d\n",a,b);
  swap(&a,&b);
  printf("After swapping a= %d and b=%d",a,b);
}
