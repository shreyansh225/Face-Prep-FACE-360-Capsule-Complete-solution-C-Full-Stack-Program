#include<iostream>
int main()
{
  int a,b,ch;
  std::cin>>a>>b>>ch;
  std::cout<<"Enter first number : Enter second number : Menu\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.Remainder\n";
  switch(ch)
  {
    case 1:std::cout<<a+b;
      		break;
      case 2:std::cout<<a-b;
      		break;
      case 3:std::cout<<a*b;
      		break;
      case 4:std::cout<<a/b;
      		break;
      case 5:std::cout<<a%b;
      		break;
    default:std::cout<<"Invalid operation";
      		break;
  }
}
